#pragma once

#include "piece.hpp"

class General : public Piece {
    public:
        General(TeamColor team);
        void moves() const override;
        void attacks() const override;
        char getChar() const override;
};