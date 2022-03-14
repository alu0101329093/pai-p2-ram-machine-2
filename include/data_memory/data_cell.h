#ifndef P3RAMMACHINE_DATA_MEMORY_DATA_CELL_H_
#define P3RAMMACHINE_DATA_MEMORY_DATA_CELL_H_

#include <cstddef>

namespace daa {

class DataCell {
 public:
  virtual int& GetValue(std::size_t index = 0) = 0;
};

}  // namespace daa

#endif  // P3RAMMACHINE_DATA_MEMORY_DATA_CELL_H_
