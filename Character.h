#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Character {

  /*
  Using the'protected' type to give derived classes access to the member
  variables
  */
protected:
  string name;
  int life;

  char path[10] = {};

public:
  Character(string name, int life);
  ~Character();

  bool Hit(int);
  int GetLife();
  void Go(char move);
  void PrintCharacter();
  bool IsAlive() const;
  void PrintLife();
  int moveCount = 0;
};

#endif