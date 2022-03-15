#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_OPERATOR_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_OPERATOR_H_

#include <string>

#include "data_memory/data_memory.h"
#include "tapes/input_tape.h"
#include "tapes/output_tape.h"

namespace daa {

class Operator {
 public:
  virtual void Execute(DataMemory& data_memory, std::size_t& program_counter,
                       InputTape& input_tape, OutputTape& output_tape,
                       int& value) = 0;

  virtual std::string ToString() = 0;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERATORS_OPERATOR_H_
