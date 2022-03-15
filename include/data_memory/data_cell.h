#ifndef P3RAMMACHINE_DATA_MEMORY_DATA_CELL_H_
#define P3RAMMACHINE_DATA_MEMORY_DATA_CELL_H_

#include <cstddef>
#include <string>

namespace daa {

class DataCell {
 public:
  virtual ~DataCell() {}

  virtual int& GetValue(std::size_t index = 0) = 0;
  virtual std::size_t GetSize() = 0;

  virtual std::string ToString() const = 0;
};

}  // namespace daa

#endif  // P3RAMMACHINE_DATA_MEMORY_DATA_CELL_H_
