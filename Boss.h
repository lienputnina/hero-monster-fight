#ifndef Boss_h
#define Boss_h

#include "./Hero.h"
#include "./Monster.h"

/*
Creating a Boss class through inheritance to get access to the
public methods and protected variables from the Monster class.
*/
class Boss : public Monster {

private:
  int heads;

public:
  /*
   1.Taking 'name' and 'life' as constructor parameters to initialize the
   Character class which Monster class inherits from.
   2. Taking 'level' as a constructor parameter to initialize the Monster class
   */
  Boss(const string name, int life, int level, int heads);

  int GetHeads() const;
  void Eat(Hero &Hero);
  void Print() const;
};

#endif