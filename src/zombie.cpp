#include "zombie.hpp"

Zombie::Zombie(TeamColor team) : Piece(PieceType::Zombie, team) {
    // Constructor initialization, if needed
}

void Zombie::moves() const {
    // Implement the moves of the Zombie piece
    // ...
    std::cout << "Zombie moves." << std::endl;
}

void Zombie::attacks() const {
    // Implement the attacks of the Zombie piece
    // ...
    std::cout << "Zombie attacks." << std::endl;
}
char Zombie::getChar() const {
    if (team == TeamColor::white) {
        return 'Z';
    }
    return 'z';
}