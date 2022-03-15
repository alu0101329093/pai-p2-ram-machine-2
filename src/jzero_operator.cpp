#include "program_memory/instructions/operators/jzero_operator.h"

namespace daa {

void JzeroOperator::Execute(DataMemory& data_memory,
                            std::size_t& program_counter, InputTape& input_tape,
                            OutputTape& output_tape, int& value) {
  if (data_memory[data_memory.kAccumulator]->GetValue() == 0)
    program_counter = value;
  else
    program_counter++;
}

std::string JzeroOperator::ToString() { return "JZERO"; }

}  // namespace daa
