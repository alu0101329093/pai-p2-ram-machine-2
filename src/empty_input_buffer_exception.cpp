#include "tapes/empty_input_buffer_exception.h"

namespace daa {

const char* EmptyInputBufferException::what() const noexcept {
  return "Insuffiecient number of arguments to initialize the program.";
}

}  // namespace daa
