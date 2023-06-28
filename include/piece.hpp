#ifndef PIECE_H
#define PIECE_H 1

#include <iostream>
#include <stdint.h>

// make an abstract base class for implementing a chess piece
namespace Board
{
    class Piece
    {
        int x;
        public:
            virtual void fun() = 0;
            int getX() { return x; }
    };
};

#endif