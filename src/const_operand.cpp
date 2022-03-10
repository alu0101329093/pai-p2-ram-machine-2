#include "program_memory/instructions/operands/const_operand.h"

namespace daa {

ConstOperand::ConstOperand(int value) : value_{value} {}

int& ConstOperand::GetValue(DataMemory& data_memory, std::size_t current_line) {
  return value_;
}

}  // namespace daa
