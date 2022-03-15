#include "program_memory/instructions/operators/jump_operator.h"

namespace daa {

void JumpOperator::Execute(DataMemory& data_memory,
                           std::size_t& program_counter, InputTape& input_tape,
                           OutputTape& output_tape, int& value) {
  program_counter = value;
}

std::string JumpOperator::ToString() { return "JUMP"; }

}  // namespace daa
