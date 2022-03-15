#ifndef P3RAMMACHINE_DATA_MEMORY_INT_VECTOR_DATA_CELL_H_
#define P3RAMMACHINE_DATA_MEMORY_INT_VECTOR_DATA_CELL_H_

#include <iostream>
#include <vector>

#include "data_memory/data_cell.h"

namespace daa {

class IntVectorDataCell : public DataCell {
 public:
  IntVectorDataCell(std::size_t size = 0);
  ~IntVectorDataCell();

  int& GetValue(std::size_t index = 0) override;

  std::string ToString() const override;

 private:
  std::vector<int> data_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_DATA_MEMORY_INT_VECTOR_DATA_CELL_H_
