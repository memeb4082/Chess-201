<<<<<<< HEAD
#ifndef BOARD_HPP

#define BOARD_HPP 1
=======
#ifndef BOARD_H

#define BOARD_H 1
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)

#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include "piece.hpp"
namespace Board
{
    class Game
    {
<<<<<<< HEAD
    public:
        int size_x;
        int size_y;
        Piece **game;
        Game();
        Game(int size_x, int size_y);
        ~Game();
        void setState(std::string filename);
        void printGame();
=======
        public:
            int size_x;
            int size_y;
            Piece **game;
            Game();
            Game(int size_x, int size_y);
            ~Game();
            void setState(std::string filename);
            void printGame();
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)
    };
}

#endif