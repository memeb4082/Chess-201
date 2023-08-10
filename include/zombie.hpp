#pragma once

#include "piece.hpp"

class Zombie : public Piece {
public:
    Zombie(TeamColor team);
    int** moves(int* pos) const override;
    void attacks() const override;
    char getChar() const override;
};
