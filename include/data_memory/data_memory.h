#ifndef P3RAMMACHINE_DATA_MEMORY_DATA_MEMORY_H_
#define P3RAMMACHINE_DATA_MEMORY_DATA_MEMORY_H_

#include <iostream>
#include <memory>
#include <sstream>
#include <vector>
#include <algorithm>

#include "data_memory/data_cell.h"
#include "data_memory/int_data_cell.h"

namespace daa {

class DataMemory {
 public:
  const std::size_t kAccumulator = 0;

  DataMemory(std::size_t size = 10);

  inline std::shared_ptr<DataCell>& operator[](std::size_t index) {
    return registers_[index];
  }

  std::string ToString() const;

 private:
  std::vector<std::shared_ptr<DataCell>> registers_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_DATA_MEMORY_DATA_MEMORY_H_
