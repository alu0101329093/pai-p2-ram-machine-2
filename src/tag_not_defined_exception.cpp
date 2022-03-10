#include "program_memory/instructions/operands/tag_not_defined_exception.h"

namespace daa {

TagNotDefinedException::TagNotDefinedException(std::string tag_name, int line)
    : tag_name_{tag_name}, line_{line} {}

const char* TagNotDefinedException::what() const noexcept {
  std::string text = "Tag " + tag_name_ + " is not defined in line " +
                     std::to_string(line_) + ".";
  return text.c_str();
}

}  // namespace daa
