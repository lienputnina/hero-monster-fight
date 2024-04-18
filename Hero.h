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

  int Kill(Monster &Monster);
  bool IsAlive() const;
  void Print();
};

#endif