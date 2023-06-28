#include "game.hpp"
#include "piece.hpp"
#include "builder.hpp"

namespace Board
{
    // Constructor
    Game::Game()
    {
        this->size_x = 8;
        this->size_y = 8;
    }
    Game::Game(int size_x, int size_y)
    {
        this->size_x = size_x;
        this->size_y = size_y;
        this->game = new Piece *[size_x];
    }

    // Destructor
    Game::~Game()
    {
        for (int i = 0; i < size_x; i++)
        {
            delete[] this->game[i];
        }
        delete[] this->game;
        std::cout << "Board Deleted" << std::endl;
    }

    void Game::setState(std::string filename)
    {
        std::ifstream inputFile(filename);
        if (!inputFile)
        {
            std::cerr << "Failed to find file" << std::endl;
            return;
        }
        char c;
        while (inputFile.get(c))
        {
            std::cout << c << std::endl;
        }
        inputFile.close();
    }

    // Print the game board
    void Game::printGame()
    {
        std::cout << "FUCK" << std::endl;
    }
}