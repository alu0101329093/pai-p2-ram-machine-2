#ifndef P3RAMMACHINE_ARGUMENTS_PARSING_H_
#define P3RAMMACHINE_ARGUMENTS_PARSING_H_

#include <cstring>
#include <iostream>2
#include <optional>
#include <string>

#include "insufficient_arguments_exception.h"

namespace daa {

enum class DebugOption {
  kNonDebug = 0,
  kInstructionsNumber = 1,
  kSimulation = 2
};

struct Arguments {
  std::string instruction_file_name;
  std::string input_file_name;
  std::string output_file_name;
  DebugOption debug_option = DebugOption::kNonDebug;
};

std::optional<Arguments> ParseArguments(int argc, char* argv[]);

}  // namespace daa

#endif  // P3RAMMACHINE_ARGUMENTS_PARSING_H_