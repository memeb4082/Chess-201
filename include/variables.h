#pragma once
#include <string>
#define BOARD_SIZE 8

enum class PieceType
{
    Zombie,
    Builder,
    Miner,
    Jester,
    Sentinel,
    Catapult,
    Dragon,
    General
};
enum class TeamColor
{
    black,
    white
};