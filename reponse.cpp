#include "reponse.h"

using namespace std;

Reponse::Reponse()
{
  solution = genReponse();

  for(int i=0; i<6; i++){couleurSolution[i] = 0;}
  
  for(int i=0; i<4; i++)
    {
      ++couleurSolution[solution.table[i]];
    }
}


/*Reponse::~Reponse()
{
  for(int i=0; i<4; i++)
    {
      cout << solution.table[i]<< " ";
    }
  cout << endl;
  }*/


Position Reponse::genReponse()
{
  srand(time(NULL));

  int rep[4] = {0, 0, 0, 0};

  for(int i=0; i<4; i++)
    {
      rep[i] = rand()%6;
    }

  
  Position reponse(rep);
  
  return rep;
}


Position Reponse::verification(Position proposition)
{
  Position retour(proposition.table);

  int couleurTemp[6] = {0, 0, 0, 0, 0, 0};

  for(int i=0; i<4; i++)
    {
      if(proposition.table[i] == solution.table[i])
	{
	  ++retour.posiOK;
	  ++couleurTemp[proposition.table[i]];
	  proposition.table[i] = -1;

	}
    }

  for(int i=0; i<4; i++)
    {
      if(proposition.table[i] > -1 && couleurTemp[proposition.table[i]] < couleurSolution[proposition.table[i]])
	{
	  ++couleurTemp[proposition.table[i]];
	  ++retour.coulOK;
	}
    }

  return retour;
}
