#ifndef P3RAMMACHINE_TAPES_OUTPUT_TAPE_H_
#define P3RAMMACHINE_TAPES_OUTPUT_TAPE_H_

#include <fstream>
#include <queue>

#include "tapes/empty_input_buffer_exception.h"

namespace daa {

class OutputTape {
 public:
  OutputTape(std::ofstream& output_file);
  ~OutputTape();

  inline void Write(int value) { output_values_.push(value); }

 private:
  std::queue<int> output_values_;
  std::ofstream& output_file_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_TAPES_OUTPUT_TAPE_H_
