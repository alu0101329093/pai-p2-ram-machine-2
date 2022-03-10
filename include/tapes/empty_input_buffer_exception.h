#ifndef P2RAMMACHINE_TAPES_EMPTY_INPUT_BUFFER_EXCEPTION_H_
#define P2RAMMACHINE_TAPES_EMPTY_INPUT_BUFFER_EXCEPTION_H_

#include <exception>

namespace daa {

class EmptyInputBufferException : public std::exception {
 public:
  const char* what() const noexcept override;
};

}  // namespace daa

#endif  // P2RAMMACHINE_TAPES_EMPTY_INPUT_BUFFER_EXCEPTION_H_