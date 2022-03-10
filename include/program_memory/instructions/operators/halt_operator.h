#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_HALT_OPERATOR_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_HALT_OPERATOR_H_

#include "program_memory/instructions/operators/operator.h"

namespace daa {

class HaltOperator : public Operator {
 public:
  void Execute(DataMemory& data_memory, std::size_t& program_counter,
               InputTape& input_tape, OutputTape& output_tape,
               int& value) override;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_HALT_OPERATOR_H_
