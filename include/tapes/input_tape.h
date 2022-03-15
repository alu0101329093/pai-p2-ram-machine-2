#ifndef P3RAMMACHINE_TAPES_INPUT_TAPE_H_
#define P3RAMMACHINE_TAPES_INPUT_TAPE_H_

#include <fstream>
#include <sstream>
#include <string>
#include <vector>

#include "tapes/empty_input_buffer_exception.h"

namespace daa {

class InputTape {
 public:
  InputTape(std::ifstream& input_file);

  inline int Read() {
    if (input_values_.empty()) throw EmptyInputBufferException{};
    return input_values_[current_index_++];
  }

  std::string ToString() const;

 private:
  std::vector<int> input_values_;
  std::size_t current_index_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_TAPES_INPUT_TAPE_H_
