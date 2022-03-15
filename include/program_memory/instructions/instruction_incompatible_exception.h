#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_INCOMPATIBLE_EXCEPTION_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_INCOMPATIBLE_EXCEPTION_H_

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

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_INSTRUCTION_INCOMPATIBLE_EXCEPTION_H_