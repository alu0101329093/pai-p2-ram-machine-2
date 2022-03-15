#include "program_memory/instructions/operands/register_pointer_operand.h"

namespace daa {

RegisterPointerOperand::RegisterPointerOperand(std::size_t index)
    : index_{index} {}

int& RegisterPointerOperand::GetValue(DataMemory& data_memory,
                                      std::size_t current_line) {
  return data_memory[data_memory[index_]->GetValue()]->GetValue();
}

std::string RegisterPointerOperand::ToString() {
  return "*" + std::to_string(index_);
}

int RegisterPointerOperand::GetIndex(DataMemory& data_memory) {
  return data_memory[index_]->GetValue();
}

}  // namespace daa
