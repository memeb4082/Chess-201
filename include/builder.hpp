#ifndef BUILDER_H
#define BUILDER_H 1

#include <iostream>
#include <stdint.h>
#include "piece.hpp"

namespace Board
{
    class Builder: public Piece
    {
        public:
            Builder();
            ~Builder();
            int y;
            void fun();

    };
}

#endif