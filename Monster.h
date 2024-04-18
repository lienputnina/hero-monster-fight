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
  void Print() const;
};

#endif