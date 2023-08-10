#include "piece.hpp"

namespace Game
{
    Piece::Piece(Team _team) : team(_team) {}
    Piece::Team Piece::getTeam() const { return team; }
}