<<<<<<< HEAD
#ifndef PIECE_HPP
#define PIECE_HPP 1

#include <iostream>
#include <stdint.h>
#include <vector>
#include <utility>
=======
#ifndef PIECE_H
#define PIECE_H 1

#include <iostream>
#include <stdint.h>

>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)
// make an abstract base class for implementing a chess piece
namespace Board
{
    class Piece
    {
<<<<<<< HEAD
    private:
        bool* isWhite;

    public:
        Piece();
        virtual ~Piece() = 0;
        bool getIsWhite();
        void setIsWhite(bool isWhite);
        virtual std::vector<std::pair<int, int>> getAllMoves(int *pos, int *dim) = 0;
        virtual std::vector<std::pair<int, int>> getAllAttacks(int *pos, int *dim) = 0;
=======
        int x;
        public:
            virtual void fun() = 0;
            int getX() { return x; }
>>>>>>> bc18b25 (added tests, fixed cmake, some boilerplate, minor fixes)
    };
};

#endif