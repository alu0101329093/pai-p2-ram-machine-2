#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_OPERATOR_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_OPERATOR_H_

#include "data_memory/data_memory.h"
#include "tapes/input_tape.h"
#include "tapes/output_tape.h"

namespace daa {

class Operator {
 public:
  virtual void Execute(DataMemory& data_memory, std::size_t& program_counter,
                       InputTape& input_tape, OutputTape& output_tape,
                       int& value) = 0;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_OPERATOR_H_
