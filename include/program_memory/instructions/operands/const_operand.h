#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_CONST_OPERAND_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_CONST_OPERAND_H_

#include "program_memory/instructions/operands/operand.h"

namespace daa {

class ConstOperand : public Operand {
 public:
  ConstOperand(int value);

  int& GetValue(DataMemory& data_memory, std::size_t current_line) override;

  std::string ToString() override;

 private:
  int value_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_CONST_OPERAND_H_
