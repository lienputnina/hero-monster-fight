#ifndef Hero_h
#define Hero_h

#include "./Character.h"
#include "./Monster.h"

class Hero : public Character {
private:
  int experience;

public:
  Hero(const string name, int life, int experience);
  ~Hero();

  int Kill(Monster &monster);
  bool IsAlive() const;

  // Taking object as parameter to use class object methods
  void Print(Hero &hero);
};

#endif