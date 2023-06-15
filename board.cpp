#include <iostream>
#include <stdint.h>
#include "include/piece.h"
namespace Board
{
    class Board
    {
    public:
        Board(uint8_t rows, uint8_t columns)
        {
            this->rows = rows;
            this->cols = columns;
            // Allocate memory for the 2D array
            // TODO: change malloc to type piece
            this->board = (Piece **)malloc(rows * sizeof(Piece *));
            for (uint8_t i = 0; i < rows; i++)
            {
                this->board[i] = (Piece *)malloc(columns * sizeof(Piece));
            }
        }
        // void AddPiece(Piece *piece)
        // {
        // }

    private:
        uint8_t rows;
        uint8_t cols;
        Piece **board;
    };
}