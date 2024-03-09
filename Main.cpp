#include <iostream>
#include "hello_world.hpp"
#include "Player.hpp"

int main() {
  Player* player = new Player();

  std::cin.get();

  delete player;
  return 0;
}