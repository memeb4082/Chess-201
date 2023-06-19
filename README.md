# Chess 2.0

### Zombie

- Zombies can move to and capture pieces on any of the three adjoining squares in front of it
- If theres an enemy piece two squares away in the three directions and the intermediate square is empty, the Zombie can perform a leaping attack and capture the piece on that square.
- As the zombie can only advance, once it reaches the back row, it will no longer be able to make any moves

### Builder

- The builder can move and capture on any of the 8 adjoining squares
- Can also build walls on any of the 8 adjoining squares as long as there is nothing occupying that square. Does this without moving

#### Walls

- Do not belong to either player and do not move
- Obstruct other pieces as neither player can move a piece into a square occupied by another player
- Only way to remove is by <b><i>capturing it with a miner</i></b>

### Jester

- Only piece that cannot capture
- Can move to any of the adjoining pieces

#### Abilities

- Can exchange places with any non jester piece if it is on one of the adjoining squares.
- Can convince enemy pieces on any of the adjoining squares (excluding general) to switch sides

### Miner

- Moves like a rook
- Able to capture walls

### Sentinel

- Moves and captures like a knight
- Protects any friendly pieces in the 4 adjoining directions in cardinal directions (NSEW) and prevents captures on those squares.
- Protection has the following rules
    - Will protect any piece of the same colour on those 4 squares (including other Sentinels)
    - Enemy pieces will not be able to capture a piece protected by a Sentinel but can still be converted by the Jester

### Catapult

- Only move one square at a time in the cardinal directions (NSEW)
- Cannot capture in squares that it moves to
- Can capture pieces 3 squares away in the cardinal directions or 2 squares away in 2 perpendicular cardinal directions (NE, NS, SE, SW)
- Ignores walls and other pieces
- Captures do not move the piece

### Dragon

- Moves like a Queen
- Cannot capture any piece it is immediately adjacent to

### General

- Moves like a King
- Cannot be captured 
- Moving to a square that can be captured is an illegal move
- If opponent move puts King in attacking range, General is in <b>danger</b>
    - Must get General out of danger in next move
        - Move
        - Capture
        - Obstruct
    - If not done, that is an illegal move
- Targeting a General is the key to winning games
- By targetting General, enemy moves are limited and can lead to a situation with no possible moves and lose as a result

# Building and installing

See the [BUILDING](BUILDING.md) document.

# Contributing

See the [CONTRIBUTING](CONTRIBUTING.md) document.

# Licensing

<!--
Please go to https://choosealicense.com/licenses/ and choose a license that
fits your needs. The recommended license for a project of this type is the
GNU AGPLv3.
-->
