#include "miner.hpp"

Miner::Miner(TeamColor team) : Piece(PieceType::Miner, team) {
    // Constructor initialization, if needed
}

int** Miner::moves(int* pos) const {
    // Implement the moves of the Miner piece
    // ...
    std::cout << "Miner moves." << std::endl;
int **moves;
return moves;
}

void Miner::attacks() const {
    // Implement the attacks of the Miner piece
    // ...
    std::cout << "Miner attacks." << std::endl;
}
char Miner::getChar() const {
    if (team == TeamColor::white) {
        return 'M';
    }
    return 'm';
}