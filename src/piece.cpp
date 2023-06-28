#include "piece.hpp"

namespace Board
{
    Piece::Piece() {}
    Piece::~Piece()
    {
        delete isWhite;
    }
    bool Piece::getIsWhite()
    {
        return *this->isWhite;
    }
    void Piece::setIsWhite(bool isWhite)
    {
        *this->isWhite = isWhite;
    }
}