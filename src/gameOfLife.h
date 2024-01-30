#ifndef GAMEOFLIFE
#define GAMEOFLIFE

#include <iostream>
#include <vector>

class gameOfLife {
  public:
    gameOfLife(int size);
    void check();
    void setStart();
    void render();
  private:
    int size;
    std::vector< std::vector<char> > board;
};

#endif