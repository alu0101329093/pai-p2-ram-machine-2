#ifndef P3RAMMACHINE_INSUFFICIENT_ARGUMENTS_EXCEPTION_H_
#define P3RAMMACHINE_INSUFFICIENT_ARGUMENTS_EXCEPTION_H_

#include <exception>

namespace daa {

class InsufficientArgumentsException : public std::exception {
 public:
  const char* what() const noexcept override;
};

}  // namespace daa

#endif  // P3RAMMACHINE_INSUFFICIENT_ARGUMENTS_EXCEPTION_H_