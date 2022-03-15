#include "program_memory/instructions/operators/store_operator.h"

namespace daa {

void StoreOperator::Execute(DataMemory& data_memory,
                            std::size_t& program_counter, InputTape& input_tape,
                            OutputTape& output_tape, int& value) {
  value = data_memory[data_memory.kAccumulator]->GetValue();
  program_counter++;
}

std::string StoreOperator::ToString() { return "STORE"; }

}  // namespace daa
