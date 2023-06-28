#ifndef MINER_HPP
#define MINER_HPP 1

#include <iostream>
#include <stdint.h>
#include "piece.hpp"

namespace Board
{
    class Miner : public Piece
    {
    private:
        bool* isWhite;

    public:
        Miner();
        bool getIsWhite();
        void setIsWhite(bool isWhite);
        std::vector<std::pair<int, int>> getAllMoves(int *pos, int *dim) override;
        std::vector<std::pair<int, int>> getAllAttacks(int *pos, int *dim) override;
    };
}

#endif