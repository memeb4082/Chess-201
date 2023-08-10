#pragma once
#include "variables.h"
#include <string>
#include <iostream>
class Piece
{
private:
    PieceType type;

public:
    TeamColor team; // TODO: Make private maybe
    Piece(PieceType type, TeamColor team);
    virtual char getChar() const = 0;
    virtual void moves() const = 0;
    virtual void attacks() const = 0;

    virtual ~Piece() {}
};