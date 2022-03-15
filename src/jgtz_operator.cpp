#include "program_memory/instructions/operators/jgtz_operator.h"

namespace daa {

void JgtzOperator::Execute(DataMemory& data_memory,
                           std::size_t& program_counter, InputTape& input_tape,
                           OutputTape& output_tape, int& value) {
  if (data_memory[data_memory.kAccumulator]->GetValue() > 0)
    program_counter = value;
  else
    program_counter++;
}

std::string JgtzOperator::ToString() { return "JGTZ"; }

}  // namespace daa
