#ifndef P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_NOT_DEFINED_EXCEPTION_OPERAND_H_
#define P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_NOT_DEFINED_EXCEPTION_OPERAND_H_

#include <exception>
#include <string>

namespace daa {

class TagNotDefinedException : public std::exception {
 public:
  TagNotDefinedException(std::string tag_name, int line);
  const char* what() const noexcept override;

 private:
  std::string tag_name_;
  int line_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_NOT_DEFINED_EXCEPTION_OPERAND_H_