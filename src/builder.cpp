<<<<<<< HEAD
#include "builder.hpp"
=======
#include "../include/builder.hpp"
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)

namespace Board
{
    // Constructor
<<<<<<< HEAD
    Builder::Builder() : Piece() {}
    std::vector<std::pair<int, int>> Builder::getAllMoves(int *pos, int *dim)
    {
        std::vector<std::pair<int, int>> moves;
        // TODO: Clean this fuck up
        if (((pos[0] + 1) >= dim[0]) & ((pos[1] + 1) >= dim[1]))
        {
            moves.push_back(std::make_pair(pos[0] + 1, pos[1] + 1));
        }
        else
        {
            if (((pos[0] + 1) >= dim[0]))
            {
                moves.push_back(std::make_pair(pos[0] + 1, pos[1]));
            }
            else if ((pos[1] + 1) >= dim[1])
            {
                moves.push_back(std::make_pair(pos[0], pos[1] + 1));
            }
        }
        if (((pos[0] - 1) >= dim[0]) & ((pos[1] - 1) >= dim[1]))
        {
            moves.push_back(std::make_pair(pos[0] - 1, pos[1] - 1));
        }
        else
        {
            if (((pos[0] - 1) >= dim[0]))
            {
                moves.push_back(std::make_pair(pos[0] - 1, pos[1]));
            }
            else if ((pos[1] - 1) >= dim[1])
            {
                moves.push_back(std::make_pair(pos[0], pos[1] - 1));
            }
        }
        if (((pos[0] - 1) >= dim[0]) & ((pos[1] + 1) >= dim[1]))
        {
            moves.push_back(std::make_pair(pos[0] - 1, pos[1] + 1));
        }
        if (((pos[0] + 1) >= dim[0]) & ((pos[1] - 1) >= dim[1]))
        {
            moves.push_back(std::make_pair(pos[0] + 1, pos[1] - 1));
        }
        return moves;
    }
    std::vector<std::pair<int, int>> Builder::getAllAttacks(int *pos, int *dim)
    {
        // std::vector<std::pair<int, int>> arr;
        // Attacks same as moves
        return this->getAllMoves(pos, dim);
=======
    Builder::Builder()
    {
        this->y = 1;
    }

    // Destructor
    Builder::~Builder()
    {
        std::cout << "Builder destructor called" << std::endl;
    }

    void Builder::fun()
    {
        std::cout << "Builder fun called" << std::endl;
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)
    }
}