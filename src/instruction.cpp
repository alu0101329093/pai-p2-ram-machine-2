#include "program_memory/instructions/instruction.h"

namespace daa {

Instruction::Instruction(Operator* current_operator, Operand* operand,
                         std::size_t line)
    : operator_{current_operator}, operand_{operand}, line_{line} {}

void Instruction::Clear() {
  delete operator_;
  if (operand_ != nullptr) delete operand_;
}

void Instruction::Execute(DataMemory& data_memory, std::size_t& program_counter,
                          InputTape& input_tape, OutputTape& output_tape) {
  if (dynamic_cast<ConstOperand*>(operand_) != nullptr) {
    if (dynamic_cast<StoreOperator*>(operator_) != nullptr ||
        dynamic_cast<ReadOperator*>(operator_) != nullptr) {
      throw InstructionIncompatibleException{line_};
    }
  }
  if (operand_->GetValue(data_memory, line_) == 0) {
    if (dynamic_cast<WriteOperator*>(operator_) != nullptr ||
        dynamic_cast<ReadOperator*>(operator_) != nullptr) {
      throw AccumulatorIncompatibilityException{"rw", line_};
    }
  }

  operator_->Execute(data_memory, program_counter, input_tape, output_tape,
                     operand_->GetValue(data_memory, line_));
}

bool Instruction::IsHalt() {
  return dynamic_cast<HaltOperator*>(operator_) != nullptr;
}

}  // namespace daa
