#include "program_memory/instructions/operators/sub_operator.h"

namespace daa {

void SubOperator::Execute(DataMemory& data_memory, std::size_t& program_counter,
                          InputTape& input_tape, OutputTape& output_tape,
                          int& value) {
  data_memory[data_memory.kAccumulator]->GetValue() -= value;
  program_counter++;
}

std::string SubOperator::ToString() { return "SUB"; }

}  // namespace daa
