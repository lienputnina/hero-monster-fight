#ifndef Monster_h
#define Monster_h

#include "./Character.h"
#include <string>
using namespace std;

class Monster : public Character {

  /*
    Using the'protected' type to give the derived class access to this
    variable
    */
protected:
  int level;

public:
  /*
  Taking 'name' and 'life' as constructor parameters to initialize
  the base class, Character.
  */
  Monster(const string name, int life, int level);
  ~Monster();

  int GetLevel() const;
  bool IsAlive() const;

  // Taking object as parameter to use Monster class object methods on it
  void Print(Monster &monster) const;
};

#endif