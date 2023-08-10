#pragma once
#include "piece.hpp"

namespace Game
{
    class Zombie : public Piece
    {
        private:
            // bool attackMatrix[9][9];
            // bool moveMatrix[9][9];
        public:
            Zombie(Team team);
            void possibleMoves(Board board) const override;
            void possibleAttacks(Board board) const override;
            bool getTeam() const override;
            ~Zombie(){};
    };
}