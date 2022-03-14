#include "data_memory/data_memory.h"

namespace daa {

DataMemory::DataMemory(std::size_t size)
    : registers_(size, new IntDataCell{}) {}

DataMemory::~DataMemory() {
  for (auto data : registers_) {
    
  }
}

}  // namespace daa
