# Space Shooter Game

Welcome to the **Space Shooter Game**, a console-based adventure game where you control a spaceship to dodge enemies, collect coins, and survive as long as possible while maintaining your health and scoring points.

## Features

- **Spaceship Control:** Move your spaceship up, down, left, or right within the game board.
- **Enemies:** Dodge incoming enemies to avoid losing health.
- **Coins:** Collect coins to increase your score.
- **Dynamic Difficulty:** Game difficulty increases as your distance traveled increases.
- **Game Over Screen:** Displays a game over message when your health reaches zero.

## How to Play

1. **Start the Game:**
   - Run the program and select option `1` to start the game.
   - Option `2` displays instructions before starting.

2. **Controls:**
   - Use arrow keys to move the spaceship:
     - `←` Left Arrow: Move left
     - `→` Right Arrow: Move right
     - `↑` Up Arrow: Move up
     - `↓` Down Arrow: Move down
   - Press the `Spacebar` to jump two rows up.

3. **Objective:**
   - Dodge enemies (`#`) falling from above.
   - Collect coins (`^`) to increase your score.
   - Survive as long as possible without running out of health.

4. **Game Information:**
   - **Health:** Displayed as hearts (`*+*`).
   - **Score:** Tracks how many coins you've collected.
   - **Distance:** Measures how far you've traveled in the game.

## Instructions

- Avoid colliding with enemies; each collision reduces your health by 1.
- Move strategically to collect coins while staying safe from enemies.
- The game board dynamically updates to reflect the game's progress.

## Code Structure

### Key Functions

- **`Board()`**: Sets up the game board and places the spaceship, enemies, and coins.
- **`show()`**: Displays health, score, and distance traveled.
- **`spawnEnemy()`**: Randomly spawns enemies on the board.
- **`moveEnemies()`**: Moves enemies downward each frame.
- **`spawncoins()`**: Spawns coins at random positions.
- **`movecoins()`**: Moves coins downward and checks for collision with the spaceship.
- **`handleMovement()`**: Handles user input for spaceship movement.
- **`updateComputerPlayerPosition()`**: Updates the position of a computer-controlled spaceship (if enabled).

### Game Logic

- The game runs in an infinite loop until the player's health reaches zero.
- Game speed increases dynamically based on the distance traveled.

## Requirements

- **Compiler**: The game requires a C++ compiler (e.g., GCC or MSVC).
- **OS**: Works on Windows systems due to the use of `<conio.h>` for keyboard input.
- **Library Dependencies**: 
  - `<iostream>`: For input/output operations.
  - `<iomanip>`: For formatted output.
  - `<cstdlib>` and `<ctime>`: For random number generation.
  - `<conio.h>`: For non-blocking keyboard input.

## How to Compile and Run

1. Save the code in a file named `SpaceShooter.cpp`.
2. Open a terminal or command prompt and navigate to the directory containing the file.
3. Compile the code using a C++ compiler:
   ```bash
   g++ SpaceShooter.cpp -o SpaceShooter
