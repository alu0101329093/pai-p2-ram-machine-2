#include "tapes/input_tape.h"

namespace daa {

InputTape::InputTape(std::ifstream& input_file) : input_values_{} {
  int value{};
  while (input_file >> value) {
    input_values_.push(value);
  }
  input_file.close();
}

}  // namespace daa
