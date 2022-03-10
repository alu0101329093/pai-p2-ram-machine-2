#include "data_memory/data_memory.h"

namespace daa {

DataMemory::DataMemory(std::size_t size) : registers_(size, 0) {}

}  // namespace daa
