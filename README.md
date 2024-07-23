# Card Guessing Game

This is a simple card guessing game written in C++. The player tries to guess which card is the ace out of three shuffled cards. The game provides feedback on whether the player guessed correctly or not.

## How to Play

1. Run the program.
2. You'll be presented with a message from Schemy Beebs and shown three cards represented as `1`, `2`, and `3`.
3. Enter your guess for which card is the ace.
4. The program will reveal if you guessed correctly and show you where the ace was.

## Code Explanation

The main logic of the game is implemented in the `main()` function. Here's a brief overview:

1. **Display Messages**:
    - A welcome message introduces the player to the game.
    - The three cards are displayed with numbers `1`, `2`, and `3`.

2. **Player Input**:
    - The player is prompted to enter their guess.

3. **Card Shuffling**:
    - The `rand()` function is used to randomly determine the position of the ace card.

4. **Game Logic**:
    - The player's guess is compared with the randomly determined ace position.
    - Appropriate messages are displayed based on whether the player guessed correctly or not.
    - The actual positions of the cards are revealed.

5. **Error Handling**:
    - If the player enters an invalid choice, an error message is displayed.

## Compilation and Execution

To compile and run the program, follow these steps:

1. Make sure you have a C++ compiler installed (e.g., `g++`).

2. Save the code in a file named `card_game.cpp`.

3. Open a terminal and navigate to the directory where the file is saved.

4. Compile the program using the following command:
    ```sh
    g++ -o card_game card_game.cpp
    ```

5. Run the compiled program:
    ```sh
    ./card_game
    ```

On Windows, you can compile and run the program using MinGW:
1. Open the MinGW command prompt.
2. Navigate to the directory where `card_game.cpp` is saved.
3. Compile the program:
    ```sh
    g++ -o card_game card_game.cpp
    ```
4. Run the program:
    ```sh
    card_game
    ```
