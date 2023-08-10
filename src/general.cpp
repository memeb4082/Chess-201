#include "general.hpp"

General::General(TeamColor team) : Piece(PieceType::General, team) {
    // Constructor initialization, if needed
}

void General::moves() const {
    // Implement the moves of the General piece
    // ...
    std::cout << "General moves." << std::endl;
}

void General::attacks() const {
    // Implement the attacks of the General piece
    // ...
    std::cout << "General attacks." << std::endl;
}
char General::getChar() const {
    if (team == TeamColor::white) {
        return 'G';
    }
    return 'g';
}