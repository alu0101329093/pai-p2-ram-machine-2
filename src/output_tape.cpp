#include "tapes/output_tape.h"

namespace daa {

OutputTape::OutputTape(std::ofstream& output_file)
    : output_values_{}, output_file_{output_file} {}

OutputTape::~OutputTape() {
  for (auto value : output_values_) {
    output_file_ << value;
  }
  // while (!output_values_.empty()) {
  //   int value = output_values_.front();
  //   output_values_.pop();
  //   output_file_ << value;
  // }
  output_file_.close();
}

std::string OutputTape::ToString() const {
  if (current_index_ == 0) return "";
  std::stringstream text{};
  for (auto value : output_values_) {
    text << value << " ";
  }
  text << "\n";
  for (std::size_t i = 0; i < current_index_ - 1; ++i) {
    text << "  ";
  }
  text << "^";
  return text.str();
}

}  // namespace daa
