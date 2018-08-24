#include <iostream>
#include "reponse.h"
#include "position.h"
#include "game.h"
#include "robot.h"

using namespace std;

enum couleur{
  Bleu = 0,
  Rouge = 1,
  Jaune = 2,
  Vert = 3,
  Orange = 4,
  Brun = 5
};



int main()
{
  Game partie;
  partie.play(); 

  //Robot joueur(&partie);
  //joueur.play();

}
