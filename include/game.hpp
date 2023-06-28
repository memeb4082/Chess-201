#ifndef BOARD_HPP

#define BOARD_HPP 1

#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include "piece.hpp"
namespace Board
{
    class Game
    {
    public:
        int size_x;
        int size_y;
        Piece **game;
        Game();
        Game(int size_x, int size_y);
        ~Game();
        void setState(std::string filename);
        void printGame();
    };
}

#endif