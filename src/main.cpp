#include "main.h"

int main(int argc, char* argv[]) {
  std::ifstream instructions_file{argv[1]};
  std::ifstream input_file{argv[2]};
  std::ofstream output_file{argv[3]};

  try {
    daa::RamMachine machine{instructions_file, input_file, output_file};
    machine.Init();
    std::cout << "Machine Finished!" << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
  }

  return EXIT_SUCCESS;
}
