#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_H_

#include "program_memory/instructions/instruction_incomptible_exception.h"
#include "program_memory/instructions/operands/const_operand.h"
#include "program_memory/instructions/operands/operand.h"
#include "program_memory/instructions/operators/halt_operator.h"
#include "program_memory/instructions/operators/operator.h"
#include "program_memory/instructions/operators/read_operator.h"
#include "program_memory/instructions/operators/store_operator.h"

namespace daa {

class Instruction {
 public:
  Instruction(Operator* current_operator, Operand* operand, std::size_t line);

  void Clear();
  void Execute(DataMemory& data_memory, std::size_t& program_counter,
               InputTape& input_tape, OutputTape& output_tape);
  bool IsHalt();

 private:
  Operator* operator_;
  Operand* operand_;
  std::size_t line_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_H_
