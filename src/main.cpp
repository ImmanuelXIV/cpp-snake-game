#include <iostream>
#include <memory>
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main() {
  int x;
  std::cout << "Would you like to play the game Snake? Press [1/0] ..." << std::endl;
  std::cin >> x;
  
  if (x == 1){
    std::cout << "Okay, let's play a game of Snake!" << std::endl;
    constexpr std::size_t kFramesPerSecond{60};
    constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
    constexpr std::size_t kScreenWidth{640};
    constexpr std::size_t kScreenHeight{640};
    constexpr std::size_t kGridWidth{32};
    constexpr std::size_t kGridHeight{32};

    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(std::move(controller), std::move(renderer), kMsPerFrame);
    std::cout << "Game has terminated successfully!\n";
    std::cout << "Score: " << game.GetScore() << "\n";
    std::cout << "Size: " << game.GetSize() << "\n";
    return 0;
  }
  else {
    std::cout << "You have to enter 1 to play. Program exits." << std::endl;
  }  
}