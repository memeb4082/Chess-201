#pragma once

#include "piece.hpp"

class Sentinel : public Piece {
    public:
        Sentinel(TeamColor team);
        void moves() const override;
        void attacks() const override;
        char getChar() const override;
};