# Number Guessing Game in C++

This is a simple command-line-based Number Guessing Game implemented in C++. The game generates a random number between 1 and 100 and asks the player to guess it. It provides feedback on whether the guess is too high or too low until the player guesses the correct number.

## How to Play

1. Compile and run the program.
2. The program will select a random number between 1 and 100.
3. You (the player) will be prompted to enter your guess.
4. After each guess, the program will provide feedback, indicating whether your guess is too high or too low.
5. Continue guessing until you correctly guess the random number.
6. Once you guess the correct number, the program will display the number of attempts it took.

## Features

- The program uses the C++ Standard Library to generate a random number between 1 and 100.
- It provides clear instructions for user input and feedback on guesses.
- It counts the number of attempts it took to guess the correct number.
- It displays a congratulatory message when you guess the correct number.

## Code Structure

- The program uses the `rand()` function, seeded with the current time, to generate a random number.
- A `do-while` loop is used to keep the game running until the correct number is guessed.
- The program checks if the guess is too high or too low and provides appropriate feedback.

## Author

- [sannan7224 ]

