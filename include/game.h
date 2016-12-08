#ifndef GAME_H
#define GAME_H

// Includes
#include <allegro.h>

// Board
#include "board.h"

// Checkers
#include "checker.h"

// Main game
class game{
  public:
    game();
    virtual ~game();

    // Update
    void update();

    // Drawing
    void draw();
  protected:

  private:
    // Buffer
    BITMAP *buffer;

    // Main board
    board main_board;

    // Turn
    bool turn;
};

#endif // GAME_H
