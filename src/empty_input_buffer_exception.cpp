#include "tapes/empty_input_buffer_exception.h"

namespace daa {

const char* EmptyInputBufferException::what() const noexcept {
  return "Error: Input buffer empty when trying to read.";
}

}  // namespace daa
