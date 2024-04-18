#ifndef Boss_h
#define Boss_h

#include "./Hero.h"
#include "./Monster.h"

class Boss : public Monster {

private:
  int heads;

public:
  Boss(const string name, int life, int level, int heads);
  ~Boss();

  int GetHeads() const;
  void Eat(Hero &Hero);
  bool IsAlive() const;

  // Taking object as parameter to use class object methods
  void Print(Boss &boss) const;
};

#endif