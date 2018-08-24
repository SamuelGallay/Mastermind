#ifndef ROBOT_H
#define ROBOT_H

#include "game.h"
#include <vector>

class Robot
{
 public:
  Robot(Game *partieDefinie);
  void play();
  void display();
  
 private:
  std::vector<Position> essais;
  Game* partie;
};

#endif
