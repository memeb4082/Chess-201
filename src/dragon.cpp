#include "dragon.hpp"

Dragon::Dragon(TeamColor team) : Piece(PieceType::Dragon, team) {
    // Constructor initialization, if needed
}

void Dragon::moves() const {
    // Implement the moves of the Dragon piece
    // ...
    std::cout << "Dragon moves." << std::endl;
}

void Dragon::attacks() const {
    // Implement the attacks of the Dragon piece
    // ...
    std::cout << "Dragon attacks." << std::endl;
}
char Dragon::getChar() const {
    if (team == TeamColor::white) {
        return 'D';
    }
    return 'd';
}