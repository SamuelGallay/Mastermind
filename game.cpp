#include "game.h"

using namespace std;

Game::Game()
{
  cout << "Création de la partie" << endl;
}


void Game::enter()
{
  Position entree;

  for(int i=0; i<4; i++)
    {
      cin >> entree.table[i];
    }
  entree = reponse.verification(entree);

  essais.push_back(entree);
}

Position Game::enter(Position prop)
{
  Position retour = reponse.verification(prop);
  essais.push_back(retour);
  
  return retour;
}

void Game::display()
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


void Game::play()
{
  bool gagne = false;
  while(!gagne)
    {
      display();
      enter();
      if(essais[essais.size()-1].posiOK == 4){gagne = true;}
    }
  display();
  cout << "#######################" << endl;
  cout << "# VOUS AVEZ GAGNE !!! #" << endl;
  cout << "#######################" << endl;
}
