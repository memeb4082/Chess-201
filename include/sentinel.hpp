#pragma once

#include "piece.hpp"

class Sentinel : public Piece {
    public:
        Sentinel(TeamColor team);
        int** moves(int* pos) const override;
        void attacks() const override;
        char getChar() const override;
};