#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include <string>

class Player {
private:
  std::string m_name;
  int m_level;
  int m_money;
public:
  Player()
    : m_name(""), m_level(0), m_money(0) {};
  
  Player(std::string name, int level, int money)
    : m_name(name), m_level(level), m_money(money) {};

  // getters setters
  void set_player_name(std::string name) { this->m_name = name; }
  std::string get_player_name() { return this->m_name; }

  void set_player_level(int level) { this->m_level = level; }
  int get_player_level() { return this->m_level; }

  void set_player_money(int money) { this->m_money = money; }
  int get_player_money() { return this->m_money; }

  void add_level(int level) { this->m_level += level; }

};

#endif