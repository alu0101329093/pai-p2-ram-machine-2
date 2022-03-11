#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_POINTER_OPERAND_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_POINTER_OPERAND_H_

#include "program_memory/instructions/operands/operand.h"

namespace daa {

class RegisterPointerOperand : public Operand {
 public:
  RegisterPointerOperand(std::size_t index);

  int& GetValue(DataMemory& data_memory, std::size_t current_line) override;

 private:
  int index_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_REGISTER_POINTER_OPERAND_H_
