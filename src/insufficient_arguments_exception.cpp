#include "insufficient_arguments_exception.h"

namespace daa {

const char* InsufficientArgumentsException::what() const noexcept {
  return "Input buffer empty when trying to read.";
}

}  // namespace daa
