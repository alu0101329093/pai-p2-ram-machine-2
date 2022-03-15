#include "program_memory/program_memory.h"

namespace daa {

ProgramMemory::ProgramMemory(std::ifstream& instructions_file)
    : instructions_{} {
  std::string line{};
  std::stringstream line_stream{};
  std::string text{};
  std::size_t current_line{};
  while (std::getline(instructions_file, line)) {
    current_line++;
    if (DetectComment(line)) continue;
    Operator* new_operator{};
    Operand* operand{};
    line_stream.str(line);
    while (line_stream >> text) {
      if (DetectTag(text)) {
        TagOperand::tags_names[text.substr(0, text.length() - 1)] =
            instructions_.size();
      } else if (new_operator == nullptr) {
        new_operator = SelectOperator(text, current_line);
      } else if (dynamic_cast<JumpOperator*>(new_operator) != nullptr ||
                 dynamic_cast<JzeroOperator*>(new_operator) != nullptr ||
                 dynamic_cast<JgtzOperator*>(new_operator) != nullptr) {
        operand = new TagOperand{text};
      } else {
        operand = SelectOperand(text);
      }
    }
    line_stream.clear();
    if (new_operator != nullptr)
      instructions_.push_back(Instruction{new_operator, operand, current_line});
  }
}

ProgramMemory::~ProgramMemory() {
  for (auto& instruction : instructions_) {
    instruction.Clear();
  }
}

bool ProgramMemory::DetectComment(const std::string& text) {
  return text[0] == '#';
}

bool ProgramMemory::DetectTag(const std::string& text) {
  return text[text.length() - 1] == ':';
}

Operator* ProgramMemory::SelectOperator(const std::string& text,
                                        std::size_t line) {
  std::string lower_case_text{text};
  std::transform(text.begin(), text.end(), lower_case_text.begin(), ::tolower);
  if (lower_case_text == "load") return new LoadOperator{};
  if (lower_case_text == "store") return new StoreOperator{};
  if (lower_case_text == "add") return new AddOperator{};
  if (lower_case_text == "sub") return new SubOperator{};
  if (lower_case_text == "mul") return new MulOperator{};
  if (lower_case_text == "div") return new DivOperator{};
  if (lower_case_text == "mod") return new ModOperator{};
  if (lower_case_text == "read") return new ReadOperator{};
  if (lower_case_text == "write") return new WriteOperator{};
  if (lower_case_text == "jump") return new JumpOperator{};
  if (lower_case_text == "jzero") return new JzeroOperator{};
  if (lower_case_text == "jgtz") return new JgtzOperator{};
  if (lower_case_text == "halt") return new HaltOperator{};
  throw OperatorNotDefinedException{lower_case_text, line};
}

Operand* ProgramMemory::SelectOperand(const std::string& text) {
  if (text[0] == '=') return new ConstOperand{std::stoi(text.substr(1))};
  if (text[0] == '*')
    return new RegisterPointerOperand{std::stoi(text.substr(1))};

  Operand* indexed_operand{nullptr};
  std::size_t indexed_operand_start = text.find('[');
  std::size_t indexed_operand_end = text.find(']');

  if (indexed_operand_start != std::string::npos &&
      indexed_operand_end != std::string::npos) {
    indexed_operand = SelectOperand(
        text.substr(indexed_operand_start + 1,
                    indexed_operand_end - indexed_operand_start - 1));
    return new RegisterOperand{std::stoi(text.substr(0, indexed_operand_start)),
                               indexed_operand};
  }
  return new RegisterOperand{std::stoi(text), indexed_operand};
}

}  // namespace daa
