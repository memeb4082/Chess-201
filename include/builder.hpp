<<<<<<< HEAD
#ifndef BUILDER_HPP
#define BUILDER_HPP 1
=======
#ifndef BUILDER_H
#define BUILDER_H 1
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)

#include <iostream>
#include <stdint.h>
#include "piece.hpp"

namespace Board
{
<<<<<<< HEAD
    class Builder : public Piece
    {
    private:
        bool* isWhite;

    public:
        Builder();
        bool getIsWhite();
        void setIsWhite(bool isWhite);
        std::vector<std::pair<int, int>> getAllMoves(int *pos, int *dim) override;
        std::vector<std::pair<int, int>> getAllAttacks(int *pos, int *dim) override;
=======
    class Builder: public Piece
    {
        public:
            Builder();
            ~Builder();
            int y;
            void fun();

>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)
    };
}

#endif