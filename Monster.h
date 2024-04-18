#ifndef Monster_h
#define Monster_h

#include "./Character.h"
#include <string>
using namespace std;

class Monster : public Character {

protected:
  int level;

public:
  Monster(const string name, int life, int level);
  ~Monster();

  int GetLevel() const;
  bool IsAlive() const;

  // Taking object as parameter to use class object methods
  void Print(Monster &monster) const;
};

#endif