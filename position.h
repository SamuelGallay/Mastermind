#ifndef POSITION_H
#define POSITION_H

struct Position
{
public:
  int table[4];
  int posiOK;
  int coulOK;

  Position();
  Position(int tableDef[4]);
};

#endif
