#pragma once

#include "piece.hpp"

class Dragon : public Piece {
    public:
        Dragon(TeamColor team);
        int** moves(int* pos) const override;
        void attacks() const override;
        char getChar() const override;
};