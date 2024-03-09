#include <iostream>
#include "hello_world.hpp"
#include "Player.hpp"

int main() {
  Player* player = new Player();
  player->set_player_name("Player");
  player->set_player_level(1);
  player->set_player_money(1000);

  std::cin.get();

  delete player;
  return 0;
}