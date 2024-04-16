#ifndef Monster_h
#define Monster_h

#include "../Character/Character.h"
#include <string>
using namespace std;

class Monster : public Character {

private:
  int level;

public:
  Monster(const string name, int life, int level);
  ~Monster();

  int GetLevel();
  void Print();
};

#endif