#include "data_memory/int_vector_data_cell.h"

namespace daa {

IntVectorDataCell::IntVectorDataCell(std::size_t size) : data_(size, 0) {}

IntVectorDataCell::~IntVectorDataCell() {}

int& IntVectorDataCell::GetValue(std::size_t index) {
  if (index >= data_.size()) data_.resize(index + 1);
  return data_[index];
}

std::string IntVectorDataCell::ToString() const {
  std::string text{};
  for (auto value : data_) {
    text += std::to_string(value) + " ";
  }
  return text;
}

}  // namespace daa
