#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_MUL_OPERATOR_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_MUL_OPERATOR_H_

#include "program_memory/instructions/operators/operator.h"

namespace daa {

class MulOperator : public Operator {
 public:
  void Execute(DataMemory& data_memory, std::size_t& program_counter,
               InputTape& input_tape, OutputTape& output_tape,
               int& value) override;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_MUL_OPERATOR_H_
