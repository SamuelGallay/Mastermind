#include <iostream>
#include "robot.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Robot::Robot(Game* partieDef)
{
  partie = partieDef;
}

void Robot::play()
{
  int  tableau[4] = {0, 0, 0, 0};



  Position pos(tableau);
  essais.push_back(partie->enter(tableau));
  display();
}

void Robot::display()
{
  cout << endl;
  cout << "|--------------|" << endl;
  cout << "|   PARTIE :   |" << endl;
  for(unsigned int i=0; i<essais.size(); i++)
    {
      cout << "| ";
      for(int j=0; j<4; j++)
        {cout << essais[i].table[j] << " ";}
      cout << "| " <<  essais[i].posiOK << " " << essais[i].coulOK << "|" << endl;
    }
  cout << "|--------------|" << endl;
}
