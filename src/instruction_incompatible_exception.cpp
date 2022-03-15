#include "program_memory/instructions/instruction_incompatible_exception.h"

namespace daa {

InstructionIncompatibleException::InstructionIncompatibleException(int line)
    : text_{"Instruction incompatible in line " + std::to_string(line) + "."} {}

const char* InstructionIncompatibleException::what() const noexcept {
  return text_.c_str();
}

}  // namespace daa
