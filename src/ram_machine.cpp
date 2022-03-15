#include "ram_machine/ram_machine.h"

namespace daa {

RamMachine::RamMachine(std::ifstream& instructions_file,
                       std::ifstream& input_file, std::ofstream& output_file,
                       DebugOption debug_option)
    : data_memory_{},
      program_memory_{instructions_file},
      input_tape_{input_file},
      output_tape_{output_file},
      program_counter_{},
      debug_option_{debug_option} {}

void RamMachine::Init() {
  Instruction current_instruction = program_memory_[program_counter_];
  std::size_t instructions_count{1};

  while (!current_instruction.IsHalt()) {
    current_instruction.Execute(data_memory_, program_counter_, input_tape_,
                                output_tape_);
    if (debug_option_ == DebugOption::kSimulation)
      DisplayDebugInfo(current_instruction);
    current_instruction = program_memory_[program_counter_];
    ++instructions_count;
  }
  if (debug_option_ == DebugOption::kSimulation)
    DisplayDebugInfo(current_instruction);

  if (debug_option_ == DebugOption::kInstructionsNumber ||
      debug_option_ == DebugOption::kSimulation) {
    std::cout << "Number of instructions executed: " << instructions_count
              << "\n";
  }
}

void RamMachine::DisplayDebugInfo(const Instruction& instruction) const {
  std::cout << "Instruction: " << instruction.ToString() << "\n";
  std::cout << "Data Memory:\n" << data_memory_.ToString();
  std::cout << "Input Tape:\n" << input_tape_.ToString() << "\n";
  std::cout << "Output Tape:\n" << output_tape_.ToString() << "\n";
  std::cout << std::endl;
}

}  // namespace daa
