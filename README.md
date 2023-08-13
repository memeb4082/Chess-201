# Chess 2.0

**Zombie (Z)**
  - Can move to and capture pieces on any of the three adjoining squares in front of the Zombie (that is, facing upwards for white and downwards for black).
  - Can perform a leaping attack, capturing the piece on the square two squares away in any of those three directions, provided that there is an enemy piece there that can be legally captured.
  - Once the Zombie reaches the back row (the top row for white, the bottom row for black), it can no longer make any moves.

**Builder (B)**
  - Can move and capture on any of the 8 adjoining squares.
  - Can build walls on any of the 8 adjoining squares as long as there is nothing occupying that square. The builder does this without moving.

**Jester (J)**
  - Can move to any of the 8 adjoining squares, but it cannot capture any pieces.
  - Can convert an enemy piece to its own side by moving to a square occupied by an enemy piece.
  - Cannot convert a piece that is protected by a wall.

**Miner (M)**
  - Can move and capture on any of the 8 adjoining squares.
  - Can destroy walls by moving to a square occupied by a wall.
  - Once a wall is destroyed, the Miner cannot move any further on that turn.

**Sentinel (S)**
  - Can move to any square along a straight line in any direction, but it cannot jump over other pieces.
  - Can capture any enemy piece that is on the square it moves to.

**Catapult (C)**
  - Can move to any square along a straight line in any direction, but it cannot jump over other pieces.
  - Can capture any enemy piece that is on the square it moves to.
  - Can destroy walls by moving to a square occupied by a wall. Once a wall is destroyed, the Catapult cannot move any further on that turn.
**Dragon (D)**
  - Can move to any square along a straight line in any direction, including jumping over other pieces.
  - Can capture any enemy piece that is on the square it moves to.