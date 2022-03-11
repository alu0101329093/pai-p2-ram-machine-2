#include "insufficient_arguments_exception.h"

namespace daa {

const char* InsufficientArgumentsException::what() const noexcept {
  return "Insuffiecient number of arguments to initialize the program.";
}

}  // namespace daa
