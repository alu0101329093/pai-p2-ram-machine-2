#ifndef P3RAMMACHINE_MAIN_H_
#define P3RAMMACHINE_MAIN_H_

#include <fstream>
#include <iostream>

#include "arguments_parsing.h"
#include "insufficient_arguments_exception.h"
#include "program_memory/instructions/instruction_incomptible_exception.h"
#include "program_memory/instructions/operands/tag_not_defined_exception.h"
#include "program_memory/instructions/operators/operator_not_defined_exception.h"
#include "ram_machine/ram_machine.h"
#include "tapes/empty_input_buffer_exception.h"

int ProtectedMain(int argc, char* argv[]);

#endif  // P3RAMMACHINE_MAIN_H_