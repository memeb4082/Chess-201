#include "jester.hpp"

Jester::Jester(TeamColor team) : Piece(PieceType::Jester, team) {
    // Constructor initialization, if needed
}

int** Jester::moves(int* pos) const {
    // Implement the moves of the Jester piece
    // ...
    std::cout << "Jester moves." << std::endl;
int **moves;
return moves;
}

void Jester::attacks() const {
    // Implement the attacks of the Jester piece
    // ...
    std::cout << "Jester attacks." << std::endl;
}
char Jester::getChar() const {
    if (team == TeamColor::white) {
        return 'J';
    }
    return 'j';
}