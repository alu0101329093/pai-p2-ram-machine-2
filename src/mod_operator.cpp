#include "program_memory/instructions/operators/mod_operator.h"

namespace daa {

void ModOperator::Execute(DataMemory& data_memory, std::size_t& program_counter,
                          InputTape& input_tape, OutputTape& output_tape,
                          int& value) {
  data_memory[data_memory.kAccumulator] %= value;
  program_counter++;
}

}  // namespace daa
