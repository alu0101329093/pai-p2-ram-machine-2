#include "program_memory/instructions/operands/tag_operand.h"

namespace daa {

std::map<std::string, int> TagOperand::tags_names = {};

TagOperand::TagOperand(std::string tag_name) : tag_name_{tag_name} {}

int& TagOperand::GetValue(DataMemory& data_memory, std::size_t current_line) {
  try {
    return tags_names.at(tag_name_);
  } catch (const std::out_of_range& error) {
    throw TagNotDefinedException(tag_name_, current_line);
  }
}

std::string TagOperand::ToString() { return tag_name_; }

}  // namespace daa
