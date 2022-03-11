#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_OPERAND_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_OPERAND_H_

#include <cstddef>

#include "data_memory/data_memory.h"

namespace daa {

class Operand {
 public:
  virtual int& GetValue(DataMemory& data_memory, std::size_t current_line) = 0;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_OPERAND_H_