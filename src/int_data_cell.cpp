#include "data_memory/int_data_cell.h"

namespace daa {

IntDataCell::IntDataCell(int data) : data_{data} {}

IntDataCell::~IntDataCell() {}

int& IntDataCell::GetValue(std::size_t) { return data_; }

std::string IntDataCell::ToString() const { return std::to_string(data_); }

}  // namespace daa
