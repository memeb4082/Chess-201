#pragma once

#include "piece.hpp"

class Dragon : public Piece {
    public:
        Dragon(TeamColor team);
        void moves() const override;
        void attacks() const override;
        char getChar() const override;
};