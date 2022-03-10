#include "program_memory/instructions/operators/operator_not_defined_exception.h"

namespace daa {

OperatorNotDefinedException::OperatorNotDefinedException(
    std::string operator_name, int line)
    : operator_name_{operator_name}, line_{line} {}

const char* OperatorNotDefinedException::what() const noexcept {
  std::string text = "Operator " + operator_name_ + " is not defined in line " +
                     std::to_string(line_) + ".";
  return text.c_str();
}

}  // namespace daa
