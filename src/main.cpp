#include "builder.hpp"
#include "game.hpp"
#include <iostream>
#include <fstream>
#include <string>
int main()
{
    Board::Game game = Board::Game(8, 8);
    game.setState("../testing/4/black/answers/tests");
    return 0;
}
