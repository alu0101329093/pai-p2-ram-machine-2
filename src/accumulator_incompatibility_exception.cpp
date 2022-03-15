#include "program_memory/instructions/operators/accumulator_incompatibility_exception.h"

namespace daa {

AccumulatorIncompatibilityException::AccumulatorIncompatibilityException(
    const std::string& operator_name, int line)
    : operator_name_{operator_name}, line_{line} {}

const char* AccumulatorIncompatibilityException::what() const noexcept {
  std::string text = "Accumulator incompatible with " + operator_name_ +
                     " in line " + std::to_string(line_) + ".";
  return text.c_str();
}

}  // namespace daa
