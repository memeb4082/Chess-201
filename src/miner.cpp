#include "miner.hpp"

Miner::Miner(TeamColor team) : Piece(PieceType::Miner, team) {
    // Constructor initialization, if needed
}

void Miner::moves() const {
    // Implement the moves of the Miner piece
    // ...
    std::cout << "Miner moves." << std::endl;
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