#include "gameOfLife.h"

void gameOfLife::setStart(const char* name) {
  if (!strcmp(name, "pulsar")) {
    board.at(1).at(3) = 'X';
    board.at(1).at(4) = 'X';
    board.at(1).at(5) = 'X';

    board.at(1).at(9) = 'X';
    board.at(1).at(10) = 'X';
    board.at(1).at(11) = 'X';

    board.at(3).at(1) = 'X';
    board.at(3).at(6) = 'X';
    board.at(3).at(8) = 'X';
    board.at(3).at(13) = 'X';

    board.at(4).at(1) = 'X';
    board.at(4).at(6) = 'X';
    board.at(4).at(8) = 'X';
    board.at(4).at(13) = 'X';

    board.at(5).at(1) = 'X';
    board.at(5).at(6) = 'X';
    board.at(5).at(8) = 'X';
    board.at(5).at(13) = 'X';

    board.at(6).at(3) = 'X';
    board.at(6).at(4) = 'X';
    board.at(6).at(5) = 'X';
    board.at(6).at(9) = 'X';
    board.at(6).at(10) = 'X';
    board.at(6).at(11) = 'X';

    board.at(8).at(3) = 'X';
    board.at(8).at(4) = 'X';
    board.at(8).at(5) = 'X';
    board.at(8).at(9) = 'X';
    board.at(8).at(10) = 'X';
    board.at(8).at(11) = 'X';

    board.at(9).at(1) = 'X';
    board.at(9).at(6) = 'X';
    board.at(9).at(8) = 'X';
    board.at(9).at(13) = 'X';

    board.at(10).at(1) = 'X';
    board.at(10).at(6) = 'X';
    board.at(10).at(8) = 'X';
    board.at(10).at(13) = 'X';

    board.at(11).at(1) = 'X';
    board.at(11).at(6) = 'X';
    board.at(11).at(8) = 'X';
    board.at(11).at(13) = 'X';

    board.at(13).at(3) = 'X';
    board.at(13).at(4) = 'X';
    board.at(13).at(5) = 'X';

    board.at(13).at(9) = 'X';
    board.at(13).at(10) = 'X';
    board.at(13).at(11) = 'X';
  } 
  if (!strcmp(name, "blinker")) {
    board.at(1).at(1) = 'X';
    board.at(2).at(1) = 'X';
    board.at(3).at(1) = 'X';
  }
}