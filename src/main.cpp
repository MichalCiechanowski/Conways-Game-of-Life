#include "gameOfLife.h"

int main() {
  gameOfLife game(15);
  game.gameLoop("blinker");
  return 0;
}