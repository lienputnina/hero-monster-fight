#ifndef Hero_h
#define Hero_h

#include "./Character.h"
#include "./Monster.h"

/*
Creating a Hero class through inheritance to get access to the
public methods and protected variables from the Character class.
*/
class Hero : public Character {

private:
  int experience;
  int GetExperience() const; // Method for getting Hero experience value

public:
  /*
  Taking 'name' and 'life' as constructor parameters to initialize
  the base class, Character.
  */
  Hero(const string name, int life, int experience);

  void Kill(Monster &monster);
  void Print() const;
};

#endif