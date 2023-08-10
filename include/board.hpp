#pragma once
#include <iostream>
namespace Game
{
    class Board
    {
        private:
            size_t size;
            char **board;
        public:
            Board(size_t size);
            Board(); // Read from default.env
            void move_piece(size_t from, size_t to);
            void print_board();
    };
}