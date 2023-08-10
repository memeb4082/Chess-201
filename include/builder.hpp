#pragma once

#include "piece.hpp"

class Builder : public Piece {
    public:
        Builder(TeamColor team);
        void moves() const override;
        void attacks() const override;
        char getChar() const override;
};