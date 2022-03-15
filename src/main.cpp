#include "main.h"

int ProtectedMain(int argc, char* argv[]) {
  std::optional<daa::Arguments> parse_result = daa::ParseArguments(argc, argv);
  if (!parse_result) return EXIT_SUCCESS;

  daa::Arguments arguments = parse_result.value();
  std::ifstream instructions_file{arguments.instruction_file_name};
  std::ifstream input_file{arguments.input_file_name};
  std::ofstream output_file{arguments.output_file_name};
  daa::DebugOption debug_option{arguments.debug_option};

  daa::RamMachine machine{instructions_file, input_file, output_file,
                          debug_option};
  machine.Init();
  std::cout << "Machine Finished!" << std::endl;

  return EXIT_SUCCESS;
}

int main(int argc, char* argv[]) {
  try {
    return ProtectedMain(argc, argv);
  } catch (const daa::InsufficientArgumentsException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    std::cerr << "Try '" << argv[0] << " --help' for more information.\n";
    return 1;
  } catch (const daa::TagNotDefinedException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 2;
  } catch (const daa::OperatorNotDefinedException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 3;
  } catch (const daa::InstructionIncompatibleException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 4;
  } catch (const daa::EmptyInputBufferException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 5;
  } catch (const daa::AccumulatorIncompatibilityException& error) {
    std::cerr << argv[0] << ": " << error.what() << "\n";
    return 6;
  } catch (...) {
    std::cerr << argv[0] << ": Unknown error\n";
    return 99;
  }
}
