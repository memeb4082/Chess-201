#include "board.hpp"
Board::Board(char *filename)
{
    std::ifstream state(filename);
    if (!state)
    {
        std::cerr << "Error loading state" << std::endl;
    }
    else
    {
        for (int row = 0; row < BOARD_SIZE; row++)
        {
            for (int col = 0; col < BOARD_SIZE; col++)
            {
                TeamColor t;
                char c;
                state >> c;
                board[row][col] = nullptr;
                if (std::isupper(c))
                {
                    t = TeamColor::white;
                }
                else
                {
                    t = TeamColor::black;
                }
                switch (std::tolower(c))
                {
                    case ('z'):
                    {
                        board[row][col] = new Zombie(t);
                        break;
                    }
                    case ('b'):
                    {
                        board[row][col] = new Builder(t);
                        break;
                    }
                    case ('m'):
                    {
                        board[row][col] = new Miner(t);
                        break;
                    }
                    case ('j'):
                    {
                        board[row][col] = new Jester(t);
                        break;
                    }
                    case ('s'):
                    {
                        board[row][col] = new Sentinel(t);
                        break;
                    }
                    case ('c'):
                    {
                        board[row][col] = new Catapult(t);
                        break;
                    }
                    case ('d'):
                    {
                        board[row][col] = new Dragon(t);
                        break;
                    }
                    case ('g'):
                    {
                        board[row][col] = new General(t);
                        break;
                    }
                }
            }
        }
    }
}
void Board::printBoard()
{
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        printf("%d ", row);
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            if (board[row][col] == nullptr)
            {
                printf("*");
            }
            else
            {
                printf("%c", board[row][col]->getChar());
            }
        }
        printf("\n");
    }
}
void Board::printMoves()
{
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        printf("%d ", row);
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            if (board[row][col] == nullptr)
            {
                printf("*");
            }
            else
            {
                int pos[2] = {row, col};
                board[row][col]->moves(pos);
            }
        }
        printf("\n");
    }
}