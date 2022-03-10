#include "tapes/output_tape.h"

namespace daa {

OutputTape::OutputTape(std::ofstream& output_file)
    : output_values_{}, output_file_{output_file} {}

OutputTape::~OutputTape() {
  while (!output_values_.empty()) {
    int value = output_values_.front();
    output_values_.pop();
    output_file_ << value;
  }
  output_file_.close();
}

}  // namespace daa
