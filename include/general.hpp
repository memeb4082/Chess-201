#pragma once

#include "piece.hpp"

class General : public Piece {
    public:
        General(TeamColor team);
        int** moves(int* pos) const override;
        void attacks() const override;
        char getChar() const override;
};