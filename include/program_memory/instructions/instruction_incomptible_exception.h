#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_INCOMPATIBLE_EXCEPTION_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_INCOMPATIBLE_EXCEPTION_H_

#include <exception>
#include <string>

namespace daa {

class InstructionIncompatibleException : public std::exception {
 public:
  InstructionIncompatibleException(int line);
  const char* what() const noexcept override;

 private:
  int line_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONSINSTRUCTION_INCOMPATIBLE_EXCEPTIOND_H_