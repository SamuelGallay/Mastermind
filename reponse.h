#ifndef REPONSE_H
#define REPONSE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "position.h"

class Reponse
{
 public:
  Reponse();
  //~Reponse();
  Position verification(Position proposition);
  
 private:
  Position solution;
  int couleurSolution[6];
  
  Position genReponse();
  
};



#endif
