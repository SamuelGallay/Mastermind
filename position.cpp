#include "position.h"

Position::Position()
{
  posiOK = 0;
  coulOK = 0;
  for(int i=0; i<4; i++)
    {
      table[i] = -1;
    }
}

Position::Position(int tableDef[4])
{
  posiOK = 0;
  coulOK = 0;
  for(int i=0; i<4; i++)
    {
      table[i] = tableDef[i];
    }

}
