#pragma once

#include "piece.hpp"

class Jester : public Piece {
    public:
        Jester(TeamColor team);
        int** moves(int* pos) const override;
        void attacks() const override;
        char getChar() const override;
};