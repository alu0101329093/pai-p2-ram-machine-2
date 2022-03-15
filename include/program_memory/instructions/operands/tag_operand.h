#ifndef P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_OPERAND_H_
#define P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_OPERAND_H_

#include <cstdint>
#include <map>
#include <string>

#include "program_memory/instructions/operands/operand.h"
#include "program_memory/instructions/operands/tag_not_defined_exception.h"

namespace daa {

class TagOperand : public Operand {
 public:
  static std::map<std::string, int> tags_names;

  TagOperand(std::string tag_name);

  int& GetValue(DataMemory& data_memory, std::size_t current_line) override;

  std::string ToString() override;

 private:
  std::string tag_name_;
};

}  // namespace daa

#endif  // P3RAMMACHINE_PROGRAM_MEMORY_INSTRUCTIONS_OPERANDS_TAG_OPERAND_H_
