#pragma once
#include <iostream>
#include <fstream>
#include "piece.hpp"
#include "zombie.hpp"
#include "builder.hpp"
#include "miner.hpp"
#include "jester.hpp"
#include "sentinel.hpp"
#include "catapult.hpp"
#include "dragon.hpp"
#include "general.hpp"

class Board
{
    private:
        Piece* board[BOARD_SIZE][BOARD_SIZE];
    public:
        Board(char *filename);
        void printBoard();
        // ~Board();
};
