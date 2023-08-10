#pragma once

#include "piece.hpp"

class Catapult : public Piece {
    public:
        Catapult(TeamColor team);
        int** moves(int* pos) const override;
        void attacks() const override;
        char getChar() const override;
};