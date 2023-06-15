#ifndef PIECE_H
#define PIECE_H 1

#include <iostream>
#include <stdint.h>

// make an abstract base class for implementing a chess piece
namespace Board {
    class Piece;  // Forward declaration of the Piece class

    class Piece {
    private:
        bool isWhite;

    public:
        // Public constructor with one input parameter
        Piece(bool isWhite) {
            this->isWhite = isWhite;
        }

        // Public member function for possible moves
        void possible_moves() {
            std::cout << "Calculating possible moves..." << std::endl;
            // Code for calculating and displaying possible moves goes here
        }

        // Public member function for possible captures
        void possible_captures() {
            std::cout << "Calculating possible captures..." << std::endl;
            // Code for calculating and displaying possible captures goes here
        };
    };
}

#endif