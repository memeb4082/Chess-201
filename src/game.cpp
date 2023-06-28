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
<<<<<<< HEAD
        this->game = new Piece *[size_x];
=======
        // this->game = new Piece *[size_x];
        // for (int i = 0; i < size_x; i++)
        // {
        //     this->game[i] = new Builder[size_y];
        // }
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)
    }

    // Destructor
    Game::~Game()
    {
<<<<<<< HEAD
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
=======
        // for (int i = 0; i < size_x; i++)
        // {
        //     delete[] this->game[i];
        // }
        // delete[] this->game;
        std::cout << "CALLED DESTRUCTOR" << std::endl;
    }

    // Set state based on a file
    void Game::setState(std::string filename)
    {
        std::ifstream inputFile(filename);
        if (inputFile.is_open())
        {
            std::string line;
            while (std::getline(inputFile, line))
            {
                std::cout << line << std::endl;
            }
            inputFile.close();
        }
        else
        {
            std::cout << "Failed to open file." << std::endl;
        }
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)
    }

    // Print the game board
    void Game::printGame()
    {
        std::cout << "FUCK" << std::endl;
    }
}