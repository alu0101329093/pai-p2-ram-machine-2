#include "program_memory/instructions/operands/tag_not_defined_exception.h"

namespace daa {

TagNotDefinedException::TagNotDefinedException(std::string tag_name, int line)
    : text_{"Tag " + tag_name + " is not defined in line " +
            std::to_string(line) + "."} {}

const char* TagNotDefinedException::what() const noexcept {
  return text_.c_str();
}

}  // namespace daa
