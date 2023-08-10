#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "variables.h"
#include "zombie.hpp"
#include "board.hpp"

int main(int argv, char **argc)
{
    printf("Hello, World!\n");
    Board b = Board(argc[1]);
    b.printBoard();
    return 0;
}
