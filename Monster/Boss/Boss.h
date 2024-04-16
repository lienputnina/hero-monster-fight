#ifndef Boss_h
#define Boss_h

#include "../Monster.h"

class Boss : public Monster {

private:
  int heads;

public:
  Boss();
  ~Boss();

  int GetHeads();
  int Eat(const Boss &Hero);

  void Print(); // probably overloads PrintCharacter
};

#endif