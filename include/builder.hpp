#pragma once

#include "piece.hpp"

class Builder : public Piece {
    public:
        Builder(TeamColor team);
        int** moves(int* pos) const override;
        void attacks() const override;
        void build();
        char getChar() const override;
};