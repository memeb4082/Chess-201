#include "sentinel.hpp"

Sentinel::Sentinel(TeamColor team) : Piece(PieceType::Sentinel, team) {
    // Constructor initialization, if needed
}

int** Sentinel::moves(int* pos) const {
    // Implement the moves of the Sentinel piece
    // ...
    std::cout << "Sentinel moves." << std::endl;
int **moves;
return moves;
}

void Sentinel::attacks() const {
    // Implement the attacks of the Sentinel piece
    // ...
    std::cout << "Sentinel attacks." << std::endl;
}
char Sentinel::getChar() const {
    if (team == TeamColor::white) {
        return 'S';
    }
    return 's';
}