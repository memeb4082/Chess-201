#include "builder.hpp"

Builder::Builder(TeamColor team) : Piece(PieceType::Builder, team) {
    // Constructor initialization, if needed
}

void Builder::moves() const {
    // Implement the moves of the Zombie piece
    // ...
    std::cout << "Builder moves." << std::endl;
}

void Builder::attacks() const {
    // Implement the attacks of the Zombie piece
    // ...
    std::cout << "Builder attacks." << std::endl;
}
char Builder::getChar() const {
    if (team == TeamColor::white) {
        return 'B';
    }
    return 'b';
}