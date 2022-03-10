#include "program_memory/instructions/operands/register_operand.h"

namespace daa {

RegisterOperand::RegisterOperand(std::size_t index) : index_{index} {}

int& RegisterOperand::GetValue(DataMemory& data_memory,
                               std::size_t current_line) {
  return data_memory[index_];
}

}  // namespace daa
