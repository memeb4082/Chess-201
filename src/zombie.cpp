#include "zombie.hpp"

namespace Game
{
    Zombie::Zombie(Team team) : Piece(team) {}
    void Zombie::possibleMoves(Board board)
    {
        printf("Zombie::possibleMoves %d\n", static_cast<int>(getTeam()));
    }
    void Zombie::possibleAttacks(Board board)
    {
        printf("Zombie::possibleAttacks %d\n", static_cast<int>(getTeam()));
    }
    bool Zombie::getTeam() const { return Piece::getTeam(); }
}