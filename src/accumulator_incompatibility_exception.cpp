#include "program_memory/instructions/operators/accumulator_incompatibility_exception.h"

namespace daa {

AccumulatorIncompatibilityException::AccumulatorIncompatibilityException(
    const std::string& operator_name, int line)
    : text_{"Accumulator incompatible with " + operator_name + " in line " +
            std::to_string(line) + "."} {}

const char* AccumulatorIncompatibilityException::what() const noexcept {
  return text_.c_str();
}

}  // namespace daa
