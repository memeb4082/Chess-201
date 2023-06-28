#ifndef PIECE_HPP
#define PIECE_HPP 1

#include <iostream>
#include <stdint.h>
#include <vector>
#include <utility>
// make an abstract base class for implementing a chess piece
namespace Board
{
    class Piece
    {
    private:
        bool* isWhite;

    public:
        Piece();
        virtual ~Piece() = 0;
        bool getIsWhite();
        void setIsWhite(bool isWhite);
        virtual std::vector<std::pair<int, int>> getAllMoves(int *pos, int *dim) = 0;
        virtual std::vector<std::pair<int, int>> getAllAttacks(int *pos, int *dim) = 0;
    };
};

#endif