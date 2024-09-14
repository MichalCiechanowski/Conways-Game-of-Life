#ifndef GAMEOFLIFE
#define GAMEOFLIFE

#include <iostream>
#include <vector>
#include <unistd.h>

class gameOfLife {
  public:
    gameOfLife(int size);
    void setStart(const char* name);
    void render();
    char check(int x, int y);
    void gameLoop(const char* name);
  private:
    int size;
    std::vector< std::vector<char> > board;
};

#endif
