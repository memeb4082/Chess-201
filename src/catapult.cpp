#include "catapult.hpp"

Catapult::Catapult(TeamColor team) : Piece(PieceType::Catapult, team) {
    // Constructor initialization, if needed
}

int** Catapult::moves(int* pos) const {
    // Implement the moves of the Catapult piece
    // ...
    std::cout << "Catapult moves." << std::endl;
int **moves;
return moves;
}

void Catapult::attacks() const {
    // Implement the attacks of the Catapult piece
    // ...
    std::cout << "Catapult attacks." << std::endl;
}
char Catapult::getChar() const {
    if (team == TeamColor::white) {
        return 'C';
    }
    return 'c';
}