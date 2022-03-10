#ifndef P2RAMMACHINE_DATA_MEMORY_DATA_MEMORY_H_
#define P2RAMMACHINE_DATA_MEMORY_DATA_MEMORY_H_

#include <vector>

namespace daa {

class DataMemory {
 public:
  const std::size_t kAccumulator = 0;

  DataMemory(std::size_t size = 100);

  inline int& operator[](std::size_t index) { return registers_[index]; }

 private:
  std::vector<int> registers_;
};

}  // namespace daa

#endif  // P2RAMMACHINE_DATA_MEMORY_DATA_MEMORY_H_
