#ifndef GAME_H
#define GAME_H

#include "reponse.h"
#include <vector>

class Game
{
 public:
  Game();
  void play();
  void display();
  void enter();
  Position enter(Position prop);
  
    
 private:
  Reponse reponse;
  std::vector<Position> essais; 
  
};

#endif
