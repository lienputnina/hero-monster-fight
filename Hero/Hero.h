#ifndef Hero_h
#define Hero_h

#include "../Character/Character.h"

class Hero : public Character {
private:
  int experience;

public:
  Hero();  // add parameters
  ~Hero(); // is this necessary?

  int Kill(const Hero &Monster);
  void Print(); // probably overloads PrintCharacter method
};

#endif