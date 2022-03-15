#include "program_memory/instructions/operands/register_operand.h"

namespace daa {

RegisterOperand::RegisterOperand(std::size_t index, Operand* index_operand)
    : index_{index}, index_operand_{index_operand} {}

RegisterOperand::~RegisterOperand() {
  if (index_operand_ != nullptr) delete index_operand_;
}

int& RegisterOperand::GetValue(DataMemory& data_memory,
                               std::size_t current_line) {
  int index_operand = 0;
  if (index_operand_ != nullptr) {
    index_operand = index_operand_->GetValue(data_memory, current_line);
  }
  return data_memory[index_]->GetValue(index_operand);
}

int RegisterOperand::GetIndex(DataMemory&) { return index_; }

}  // namespace daa
