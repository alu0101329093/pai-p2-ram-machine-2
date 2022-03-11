#include "arguments_parsing.h"

namespace daa {

std::optional<Arguments> ParseArguments(int argc, char* argv[]) {
  if (argc > 1 && std::strcmp(argv[1], "--help") == 0) {
    std::cout << "Usage: " << argv[0]
              << "instructions_file.ram input_file.in output_file.out debug\n";
    std::cout << "This program  will load the instructions in the instructions "
                 "file, and run the ram program using input file and output "
                 "file as its default input and output.\n";
    std::cout
        << "The debug argument is an int and hold how the program will run:\n"
           "0 if not debug needed,\n"
           "1 if only want executed instructions amount\n"
           "2 if want full debug session\n";
    return std::nullopt;
  }
  if (argc < 4) {
    throw daa::InsufficientArgumentsException{};
  }

  return Arguments{std::string{argv[1]}, std::string{argv[2]},
                   std::string{argv[3]},
                   static_cast<DebugOption>(std::stoi(argv[4]))};
}

}  // namespace daa