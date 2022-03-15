#include "program_memory/instructions/operators/operator_not_defined_exception.h"

namespace daa {

OperatorNotDefinedException::OperatorNotDefinedException(
    std::string operator_name, int line)
    : text_{"Operator " + operator_name + " is not defined in line " +
            std::to_string(line) + "."} {}

const char* OperatorNotDefinedException::what() const noexcept {
  return text_.c_str();
}

}  // namespace daa
