#ifndef Hero_h
#define Hero_h

#include "./Character.h"
#include "./Monster.h"

class Hero : public Character {

private:
  int experience;

public:
  /*
  Taking 'name' and 'life' as constructor parameters to initialize
  the base class, Character.
  */
  Hero(const string name, int life, int experience);
  ~Hero();

  void Kill(Monster &monster);
  int GetExperience() const; // Method for getting Hero experience value
  bool IsAlive() const;

  // Taking object as parameter to use Hero class methods on it
  void Print(Hero &hero);
};

#endif