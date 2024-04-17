#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Character {

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
  void PrintCharacter(); // might need to overload this for children
  bool IsAlive() const;
  void PrintLife(); // might need to overload this for children
  int moveCount = 0;
};

#endif