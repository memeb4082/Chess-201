#pragma once

#include "piece.hpp"

class Catapult : public Piece {
    public:
        Catapult(TeamColor team);
        void moves() const override;
        void attacks() const override;
        char getChar() const override;
};