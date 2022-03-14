#ifndef P3RAMMACHINE_RAM_MACHINE_RAM_MACHINE_H_
#define P3RAMMACHINE_RAM_MACHINE_RAM_MACHINE_H_

#include <fstream>
#include <iostream>

#include "arguments_parsing.h"
#include "data_memory/data_memory.h"
#include "program_memory/program_memory.h"
#include "tapes/input_tape.h"
#include "tapes/output_tape.h"

namespace daa {

class RamMachine {
 public:
  RamMachine(std::ifstream& instructions_file, std::ifstream& input_file,
             std::ofstream& output_file, DebugOption debug_option);

  void Init();

 private:
  DataMemory data_memory_;
  ProgramMemory program_memory_;
  InputTape input_tape_;
  OutputTape output_tape_;
  std::size_t program_counter_;
  DebugOption debug_option_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_RAM_MACHINE_RAM_MACHINE_H_
