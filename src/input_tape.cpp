#include "tapes/input_tape.h"

namespace daa {

InputTape::InputTape(std::ifstream& input_file)
    : input_values_{}, current_index_{} {
  int value{};
  while (input_file >> value) {
    input_values_.push_back(value);
  }
  input_file.close();
}

std::string InputTape::ToString() const {
  std::stringstream text{};
  for (auto value : input_values_) {
    text << value << " ";
  }
  text << "\n";
  if (current_index_ > 0) {
    for (std::size_t i = 0; i < current_index_ - 1; ++i) {
      text << "  ";
    }
    text << "^";
  }
  return text.str();
}

}  // namespace daa
