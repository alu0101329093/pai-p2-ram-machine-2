#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_ACCUMULATOR_INCOMPATIBILITY_EXCEPTION_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_ACCUMULATOR_INCOMPATIBILITY_EXCEPTION_H_

#include <exception>
#include <string>

namespace daa {

class AccumulatorIncompatibilityException : public std::exception {
 public:
  AccumulatorIncompatibilityException(const std::string& operator_name,
                                      int line);
  const char* what() const noexcept override;

 private:
  std::string text_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_ACCUMULATOR_INCOMPATIBILITY_EXCEPTION_H_