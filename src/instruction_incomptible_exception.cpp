#include "program_memory/instructions/instruction_incomptible_exception.h"

namespace daa {

InstructionIncompatibleException::InstructionIncompatibleException(int line)
    : line_{line} {}

const char* InstructionIncompatibleException::what() const noexcept {
  std::string text =
      "Error: Instruction incompatible in line " + std::to_string(line_) + ".";
  return text.c_str();
}

}  // namespace daa
