# Snake Game Project

This project is a C++ implementation of the old school Snake game and was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The basic game structure is mostly as follows:
1. Main game loop to run the game
2. Input loop to get user input
3. Render loop to render the game on the screen

The basic program and file structure is like this:

| file         | main functions (reduced)/objects                                                                   |
|--------------|----------------------------------------------------------------------------------------------------|
| main.cpp     | Renderer renderer; Controller controller; Game game; game.Run();                                   |
| game.h       | Run(); GetScore(); GetSize(); std::shared_ptr<Snake> snake; SDL_Point food; PlaceFood(); Update(); |
| snake.h      | GrowBody(); SnakeCell(); UpdateHead(); UpdateBody();                                               |
| controller.h | HandleInput(); ChangeDirection();                                                                  |
| renderer.h   | Render(); UpdateWindowTitle(); SDL_SetWindowTitle(); DrawColor();                                  |


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame` and follow the instructions.

Running the game looks similar to the above shown Snake gif.

## Project Rubics
This is an explanation of how my submission satisfies the necessary rubrics:

| Rubic                       | Details                                                                              | Where                                                                                                                                                                                             |
|-----------------------------|--------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| README.md                   | all rubics satisfied                                                                 | see README.md                                                                                                                                                                                     |
| Compiling and Testing       | all rubics satisfied                                                                 | see README.md                                                                                                                                                                                     |
| Loops, Functions, I/O       | The project accepts user input and processes the input.                              | main.cpp, line 8-13, 30-32                                                                                                                                                                        |
| Object Oriented Programming | Overloaded functions allow the same function to operate on different parameters.     | renderer.h, line 21,22 \| renderer.cpp, line 41-66, 74, 78, 84, 95, 97                                                                                                                            |
|                             | Templates generalize functions in the project.                                       | renderer.h, line: 16-20 \| game.cpp, line: 39                                                                                                                                                     |
| Memory Management           | The project uses move semantics to move data, instead of copying it, where possible. | main.cpp, line: 24 \| game.h, line: 14, 15 \| game.cpp, line: 13, 14                                                                                                                              |
|                             | The project uses smart pointers instead of raw pointers.                             | game.h, line: 20 \| game.cpp, line: 6, 60, 69, 71-74, 81-82, 87 \| controller.h, line: 9, 12-13 \| controller.cpp, line: 8-10, 13 \| renderer.h, line: 15 \| renderer.cpp, line: 68, 85, 92-94 \| |


## Acknowledgements
This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.