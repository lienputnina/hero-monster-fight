#ifndef Monster_h
#define Monster_h

#include "./Character.h"
#include <string>
using namespace std;

/*
Creating a Monster class through inheritance to get access to the
public methods and protected variables from the Character class.
*/
class Monster : public Character {

  /*
    Using the 'protected' access type to give the derived Boss class access to
    this variable.
    */
protected:
  int level;

public:
  /*
  Taking 'name' and 'life' as constructor parameters to initialize
  the base class, Character.
  */
  Monster(const string name, int life, int level);

  int GetLevel() const;
  void Print() const;
};

#endif