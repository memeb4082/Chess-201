#pragma once

#include "piece.hpp"

class Miner : public Piece {
    public:
        Miner(TeamColor team);
        void moves() const override;
        void attacks() const override;
        char getChar() const override;
};