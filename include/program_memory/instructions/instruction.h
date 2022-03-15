#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_H_

#include "program_memory/instructions/instruction_incompatible_exception.h"
#include "program_memory/instructions/operands/const_operand.h"
#include "program_memory/instructions/operands/operand.h"
#include "program_memory/instructions/operators/accumulator_incompatibility_exception.h"
#include "program_memory/instructions/operators/halt_operator.h"
#include "program_memory/instructions/operators/operator.h"
#include "program_memory/instructions/operators/read_operator.h"
#include "program_memory/instructions/operators/write_operator.h"
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

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_H_
