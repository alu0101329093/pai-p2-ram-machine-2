#include "data_memory/data_memory.h"

namespace daa {

DataMemory::DataMemory(std::size_t size) : registers_(size) {
  std::generate(registers_.begin(), registers_.end(),
                [] { return std::make_shared<IntDataCell>(); });
}

std::string DataMemory::ToString() const {
  std::stringstream text{};
  for (std::size_t i = 0; i < registers_.size(); ++i) {
    text << i << ": " << registers_[i]->ToString() << std::endl;
  }
  return text.str();
}

}  // namespace daa
