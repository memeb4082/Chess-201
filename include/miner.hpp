#pragma once

#include "piece.hpp"

class Miner : public Piece {
    public:
        Miner(TeamColor team);
        int** moves(int* pos) const override;
        void attacks() const override;
        char getChar() const override;
};