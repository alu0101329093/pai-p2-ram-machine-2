#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_OPERAND_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_OPERAND_H_

#include "program_memory/instructions/operands/operand.h"

namespace daa {

class RegisterOperand : public Operand {
 public:
  RegisterOperand(std::size_t index);

  int& GetValue(DataMemory& data_memory, std::size_t current_line) override;

 private:
  int index_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_OPERAND_H_
