#include "gameOfLife.h"

gameOfLife::gameOfLife(int size) {
  this->size = size;
  std::vector<char> tmp;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      tmp.push_back(' ');
    }
    board.push_back(tmp);
    tmp.clear();
  }
}

void gameOfLife::check() {
  //Any live cell with fewer than two live neighbors dies, as if by underpopulation.
  //Any live cell with two or three live neighbors lives on to the next generation
  //Any live cell with more than three live neighbors dies, as if by overpopulation.
  //Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
  
}

void gameOfLife::setStart() {
  board.at(2).at(2) = 'X';
  board.at(2).at(1) = 'X';
  board.at(2).at(3) = 'X';
}

void gameOfLife::render() {
  for (int i = 0; i < (size+1)*2+1; i++) {
    std::cout << '-';
  }
  std::cout << '\n';

  for (int i = 0; i < board.size(); i++) {
    std::cout << "| ";
    for (int j = 0; j < board.at(0).size(); j++) {
      std::cout << board.at(i).at(j) << ' ';
    }
    std::cout << "|\n";
  }

  for (int i = 0; i < (size+1)*2+1; i++) {
    std::cout << '-';
  }
  std::cout << '\n';
}