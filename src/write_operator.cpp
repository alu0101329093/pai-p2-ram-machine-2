#include "program_memory/instructions/operators/write_operator.h"

namespace daa {

void WriteOperator::Execute(DataMemory& data_memory,
                            std::size_t& program_counter, InputTape& input_tape,
                            OutputTape& output_tape, int& value) {
  output_tape.Write(value);
  program_counter++;
}

}  // namespace daa
