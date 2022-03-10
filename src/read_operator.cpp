#include "program_memory/instructions/operators/read_operator.h"

namespace daa {

void ReadOperator::Execute(DataMemory& data_memory,
                           std::size_t& program_counter, InputTape& input_tape,
                           OutputTape& output_tape, int& value) {
  value = input_tape.Read();
  program_counter++;
}

}  // namespace daa
