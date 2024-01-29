#include <iostream>
#include <vector>

class gameOfLife {
  public:
    gameOfLife(int size) {
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

    void check() {
      //Any live cell with fewer than two live neighbors dies, as if by underpopulation.
      //Any live cell with two or three live neighbors lives on to the next generation
      //Any live cell with more than three live neighbors dies, as if by overpopulation.
      //Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
      
    }

    void setStart() {
      board.at(2).at(2) = 'X';
      board.at(2).at(1) = 'X';
      board.at(2).at(3) = 'X';
    }

    void render() {
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
  private:
    int size;
    std::vector<std::vector<char>> board;
};

int main() {
  gameOfLife game(7);

  game.setStart();
  game.render();
  return 0;
}