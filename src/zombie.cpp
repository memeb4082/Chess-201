#include "zombie.hpp"

namespace Board
{
    // Constructor
    Zombie::Zombie() : Piece() {}
    std::vector<std::pair<int, int>> Zombie::getAllMoves(int *pos, int *dim)
    {
        // std::vector<std::pair<int, int>> arrayOfPairs(arraySize);
        // return *arr;
        std::vector<std::pair<int, int>> arr;
        return arr;
    }
    std::vector<std::pair<int, int>> Zombie::getAllAttacks(int *pos, int *dim)
    {
        std::vector<std::pair<int, int>> arr;
        return arr;
    }
}