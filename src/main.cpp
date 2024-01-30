#include "gameOfLife.h"

int main() {
  gameOfLife game(7);
  game.setStart();
  game.render();
  return 0;
}