#include "Board.hpp"
#include <vector>
const unsigned int DEFAULT_SIZE = 100L;

namespace ariel {
Board::Board() {
  Board::row_size = DEFAULT_SIZE;
  Board::col_size = DEFAULT_SIZE;
  Board::board.resize(row_size);
  for (size_t i = 0; i < row_size; i++) {
    Board::board[i].resize(col_size);
  }
}
void Board::show() {}
void Board::post(unsigned int row, unsigned int col, Direction direction, std::string msg) {
}
std::string Board::read(unsigned int row, unsigned int col, Direction direction, unsigned int length) {
  return "";
}
void Board::resize(unsigned int row, unsigned int col) {
}
Board::~Board() {}
} // namespace ariel