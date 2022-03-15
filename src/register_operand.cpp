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
    if (dynamic_cast<IntDataCell*>(data_memory[index_].get()) != nullptr) {
      data_memory[index_] = std::make_shared<IntVectorDataCell>();
    }
  } else {
    if (dynamic_cast<IntVectorDataCell*>(data_memory[index_].get()) !=
        nullptr) {
      data_memory[index_] = std::make_shared<IntDataCell>();
    }
  }
  return data_memory[index_]->GetValue(index_operand);
}

std::string RegisterOperand::ToString() {
  return std::to_string(index_) + (index_operand_ != nullptr
                                       ? "[" + index_operand_->ToString() + "]"
                                       : "");
}

int RegisterOperand::GetIndex(DataMemory&) { return index_; }

}  // namespace daa
