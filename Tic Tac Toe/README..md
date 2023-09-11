# Tic-Tac-Toe Game in C++

This is a simple command-line-based Tic-Tac-Toe game implemented in C++. The game allows two players to take turns to play Tic-Tac-Toe on a 3x3 grid. The program displays the game board, tracks player moves, and determines the winner or a draw.

## How to Play

1. Compile and run the program.
2. Player 1 starts with 'X', and Player 2 plays as 'O'.
3. Players take turns entering a number (1 to 9) corresponding to their desired move on the game board.
4. The program checks for a winner or a draw after each move and displays the result.
5. The game continues until there is a winner or a draw.

## Features

- Two players can take turns to play.
- The program checks for a win condition (3 in a row horizontally, vertically, or diagonally) and declares the winner.
- It also checks for a draw when all cells on the board are filled.
- Clear instructions are provided for user input and game status updates.

## Code Structure

- The program is structured using C++ classes, with a `base` class containing functions for drawing the game board and checking for a draw, and a `derived` class handling player moves and win/draw conditions.
- The `std::string choice` variable is used to accept player input for move selection.
- The game loop continues until there is a winner or a draw.

## Author

- [ sannan7224 ]

