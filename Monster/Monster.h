#ifndef Monster_h
#define Monster_h

#include "../Character/Character.h"

class Monster : public Character {

private:
  int level;

public:
  Monster(int level);
  ~Monster();

  int GetLevel();
  void Print(); // probably overloads PrintCharacter
};

#endif