#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "system_info.h"
#include "HighScore.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};
  
  
  // Metagame stats
  SysInfo sysInfo;
  sysInfo.printPlatform();
  
  HighScore highcore;
  
  //HighScore *highcore = new HighScore();
  
  

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.UpdateGameLevel();
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  highcore.WriteGameScore(game.GetScore() );
  return 0;
}