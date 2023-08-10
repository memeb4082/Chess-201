
#pragma once
#include <iostream>
#include "board.hpp"
namespace Game
{
    class Piece
    {
    public:
        enum Team
        {
            WHITE,
            BLACK
        };
    
    private:
        Team team;
    public:
        Piece(Team team);
        virtual void possibleMoves(Board board) const = 0;
        virtual void possibleAttacks(Board board) const = 0;
        virtual bool getTeam() const = 0;
        virtual ~Piece() {};
    };
}