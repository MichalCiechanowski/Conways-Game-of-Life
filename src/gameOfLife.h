#ifndef GAMEOFLIFE
#define GAMEOFLIFE

#include <bits/stdc++.h>

class gameOfLife {
  public:
    gameOfLife(int size);
    void setStart();
    void render();
    char check(int x, int y);
    void gameLoop();
  private:
    int size;
    std::vector< std::vector<char> > board;
};

#endif