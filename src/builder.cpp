#include "../include/builder.hpp"

namespace Board
{
    // Constructor
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
    }
}