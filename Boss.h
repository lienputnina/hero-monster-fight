#ifndef Boss_h
#define Boss_h

#include "./Hero.h"
#include "./Monster.h"

class Boss : public Monster {

private:
  int heads;

public:
  /*
   1.Taking 'name' and 'life' as constructor parameters to initialize the
   Character class which Monster class inherits from
   2. Taking 'level' as a constructor parameter to initialize the Monster class
   */
  Boss(const string name, int life, int level, int heads);
  ~Boss();

  int GetHeads() const;
  void Eat(Hero &Hero);
  bool IsAlive() const;

  // Taking object as parameter to use class object methods
  void Print(Boss &boss) const;
};

#endif