#pragma once

#include "piece.hpp"

class Jester : public Piece {
    public:
        Jester(TeamColor team);
        void moves() const override;
        void attacks() const override;
        char getChar() const override;
};