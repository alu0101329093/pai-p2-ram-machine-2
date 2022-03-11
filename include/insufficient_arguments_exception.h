#ifndef P2RAMMACHINE_INSUFFICIENT_ARGUMENTS_EXCEPTION_H_
#define P2RAMMACHINE_INSUFFICIENT_ARGUMENTS_EXCEPTION_H_

#include <exception>

namespace daa {

class InsufficientArgumentsException : public std::exception {
 public:
  const char* what() const noexcept override;
};

}  // namespace daa

#endif  // P2RAMMACHINE_INSUFFICIENT_ARGUMENTS_EXCEPTION_H_