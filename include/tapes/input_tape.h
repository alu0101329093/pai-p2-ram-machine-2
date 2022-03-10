#ifndef P2RAMMACHINE_TAPES_INPUT_TAPE_H_
#define P2RAMMACHINE_TAPES_INPUT_TAPE_H_

#include <fstream>
#include <queue>

#include "tapes/empty_input_buffer_exception.h"

namespace daa {

class InputTape {
 public:
  InputTape(std::ifstream& input_file);

  inline int Read() {
    if (input_values_.empty()) throw EmptyInputBufferException{};
    int value = input_values_.front();
    input_values_.pop();
    return value;
  }

 private:
  std::queue<int> input_values_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_TAPES_INPUT_TAPE_H_
