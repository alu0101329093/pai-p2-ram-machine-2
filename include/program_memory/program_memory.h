#ifndef P2RAMMACHINE_PROGRAM_MEMORY_PROGRAM_MEMORY_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_PROGRAM_MEMORY_H_

#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "program_memory/instructions/instruction.h"
#include "program_memory/instructions/operands/const_operand.h"
#include "program_memory/instructions/operands/register_operand.h"
#include "program_memory/instructions/operands/register_pointer_operand.h"
#include "program_memory/instructions/operands/tag_operand.h"
#include "program_memory/instructions/operators/add_operator.h"
#include "program_memory/instructions/operators/div_operator.h"
#include "program_memory/instructions/operators/halt_operator.h"
#include "program_memory/instructions/operators/jgtz_operator.h"
#include "program_memory/instructions/operators/jump_operator.h"
#include "program_memory/instructions/operators/jzero_operator.h"
#include "program_memory/instructions/operators/load_operator.h"
#include "program_memory/instructions/operators/mod_operator.h"
#include "program_memory/instructions/operators/mul_operator.h"
#include "program_memory/instructions/operators/operator_not_defined_exception.h"
#include "program_memory/instructions/operators/read_operator.h"
#include "program_memory/instructions/operators/store_operator.h"
#include "program_memory/instructions/operators/sub_operator.h"
#include "program_memory/instructions/operators/write_operator.h"

namespace daa {

class ProgramMemory {
 public:
  ProgramMemory(std::ifstream& instructions_file);
  ~ProgramMemory();

  inline Instruction& operator[](std::size_t index) {
    return instructions_[index];
  }
  inline const Instruction& operator[](std::size_t index) const {
    return instructions_[index];
  }

 private:
  bool DetectComment(const std::string& text);
  bool DetectTag(const std::string& text);
  Operator* SelectOperator(const std::string& text, std::size_t line);
  Operand* SelectOperand(const std::string& text);

  std::vector<Instruction> instructions_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_PROGRAM_MEMORY_H_
