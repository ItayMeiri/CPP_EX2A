#pragma once
#include "Direction.hpp"
#include <string>
#include <vector>

namespace ariel {
class Board {
private:
  std::vector<std::vector<char>> board;
  unsigned int row_size;
  unsigned int col_size;

public:
  Board();
  ~Board();
  std::string read(unsigned int row, unsigned int col, Direction direction, unsigned int length);
  void show();
  void post(unsigned int row, unsigned int col, Direction direction, std::string msg);
  void resize(unsigned int row, unsigned int col);
};
} // namespace ariel