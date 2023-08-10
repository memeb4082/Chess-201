#include "board.hpp"

namespace Game
{
    Board::Board()
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; ++j)
            {
                board[i][j] = nullptr;
            }
        }
    }
    void Board::printBoard() const
    {
        printf("  ");
        for (int i = 0; i < 9; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        for (int i = 0; i < 9; i++)
        {
            printf("%d ", i);
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j] == nullptr)
                {
                    printf("  ");
                }
                else
                {
                    printf("%d ", static_cast<int>(board[i][j]->getTeam()));
                }
            }
            printf("\n");
        }
    }
    void Board::setPiece(Piece *piece, int x, int y)
    {
        board[x][y] = piece;
    }
    Piece *Board::getPiece(int x, int y) const
    {
        return board[x][y];
    }
    Board::~Board()
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; ++j)
            {
                delete board[i][j];
            }
        }
    }
}