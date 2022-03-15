#ifndef P3RAMMACHINE_DATA_MEMORY_INT_DATA_CELL_H_
#define P3RAMMACHINE_DATA_MEMORY_INT_DATA_CELL_H_

#include <cstddef>
#include <iostream>

#include "data_memory/data_cell.h"

namespace daa {

class IntDataCell : public DataCell {
 public:
  IntDataCell(int data = 0);
  ~IntDataCell();

  int& GetValue(std::size_t index = 0) override;
  std::size_t GetSize() override;

  std::string ToString() const override;

 private:
  int data_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_DATA_MEMORY_INT_DATA_CELL_H_
