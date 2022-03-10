#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_CONST_OPERAND_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_CONST_OPERAND_H_

#include "program_memory/instructions/operands/operand.h"

namespace daa {

class ConstOperand : public Operand {
 public:
  ConstOperand(int value);

  int& GetValue(DataMemory& data_memory, std::size_t current_line) override;

 private:
  int value_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_CONST_OPERAND_H_
