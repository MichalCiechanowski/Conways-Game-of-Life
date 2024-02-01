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

char gameOfLife::check(int x, int y) {
  //1. Any live cell with fewer than two live neighbors dies, as if by underpopulation.
  //2. Any live cell with two or three live neighbors lives on to the next generation
  //3. Any live cell with more than three live neighbors dies, as if by overpopulation.
  //4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
  
  //1. 
  int sum = 0;
  //corners
  if ((x == 0) && (y == 0)) {
    if (board.at(0).at(1) == 'X') {
      sum++;
    }
    if (board.at(1).at(0) == 'X') {
      sum++;
    }
    if (board.at(1).at(1) == 'X') {
      sum++;
    }
  } else

  if ((x == 0) && (y == size - 1)) {
    if (board.at(0).at(size - 2) == 'X') {
      sum++;
    }
    if (board.at(1).at(size - 2) == 'X') {
      sum++;
    }
    if (board.at(1).at(size - 1) == 'X') {
      sum++;
    }
  } else

  if ((x == (size - 1)) && (y == (size - 1))) {
    if (board.at(size - 2).at(size - 2) == 'X') {
      sum++;
    }
    if (board.at(size - 2).at(size - 1) == 'X') {
      sum++;
    }
    if (board.at(size - 1).at(size - 2) == 'X') {
      sum++;
    }
  } else

  if ((x == (size - 1)) && (y == (0))) {
    if (board.at(size - 1).at(1) == 'X') {
      sum++;
    }
    if (board.at(size - 2).at(1) == 'X') {
      sum++;
    }
    if (board.at(size - 2).at(0) == 'X') {
      sum++;
    }
  } else

  //edges

  if (x == 0) {
    if (board.at(0).at(y - 1) == 'X') sum++;
    if (board.at(0).at(y + 1) == 'X') sum++;
    if (board.at(1).at(y + 1) == 'X') sum++;
    if (board.at(1).at(y - 1) == 'X') sum++;
    if (board.at(1).at(y) == 'X') sum++;
  } else

  if (x == (size - 1)) {
    if (board.at(size - 1).at(y - 1) == 'X') sum++;
    if (board.at(size - 1).at(y + 1) == 'X') sum++;
    if (board.at(size - 2).at(y + 1) == 'X') sum++;
    if (board.at(size - 2).at(y - 1) == 'X') sum++;
    if (board.at(size - 2).at(y) == 'X') sum++;
  } else

  if (y == 0) {
    if (board.at(x - 1).at(0) == 'X') sum++;
    if (board.at(x + 1).at(0) == 'X') sum++;
    if (board.at(x + 1).at(1) == 'X') sum++;
    if (board.at(x - 1).at(1) == 'X') sum++;
    if (board.at(x).at(1) == 'X') sum++;
  } else

  if (y == (size - 1)) {
    if (board.at(x - 1).at(size - 1) == 'X') sum++;
    if (board.at(x + 1).at(size - 1) == 'X') sum++;
    if (board.at(x + 1).at(size - 2) == 'X') sum++;
    if (board.at(x - 1).at(size - 2) == 'X') sum++;
    if (board.at(x).at(size - 2) == 'X') sum++;
  } else

  //other cases

  {
    if (board.at(x).at(y + 1) == 'X') sum++;
    if (board.at(x).at(y - 1) == 'X') sum++;

    if (board.at(x - 1).at(y - 1) == 'X') sum++;
    if (board.at(x - 1).at(y) == 'X') sum++;
    if (board.at(x - 1).at(y + 1) == 'X') sum++;

    if (board.at(x + 1).at(y - 1) == 'X') sum++;
    if (board.at(x + 1).at(y) == 'X') sum++;
    if (board.at(x + 1).at(y + 1) == 'X') sum++;
  }
  
  if (board.at(x).at(y) == 'X') {
    if ((sum < 2) || (sum > 3)) return ' ';
    if ((sum == 2) || (sum == 3)) return 'X';
  } else if (sum == 3) {
    return 'X';
  }
  return ' ';
}

void gameOfLife::render() {
  system("clear");
  for (long unsigned int i = 0; i < board.size(); i++) {
    for (long unsigned int j = 0; j < board.at(0).size(); j++) {
      std::cout << board.at(i).at(j) << ' ';
    }
    std::cout << "\n";
  }
  std::cout << '\n';
}

void gameOfLife::gameLoop() {
  setStart();
  render();
  std::vector<char> tmpSmallVec;
  std::vector<std::vector<char>> tmpBigVec;
  for (;;) {
    sleep(1);
    for (long unsigned int i = 0; i < board.size(); i++) {
      for (long unsigned int j = 0; j < board.size(); j++) {
        tmpSmallVec.push_back(check(i, j));
      }
      tmpBigVec.push_back(tmpSmallVec);
      tmpSmallVec.clear();
    }
    board = tmpBigVec;
    tmpBigVec.clear();
    render();
  }
}