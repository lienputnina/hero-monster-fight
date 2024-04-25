#ifndef Character_h
#define Character_h

#include <string>
using namespace std;

class Character {

private:
  char path[10] = {};
  int moveCount = 0;
  void PrintCharacter();

  /*
    Using the'protected' access type to give the derived Hero and Monster
    classes access to the member variables.
  */
protected:
  string name;
  int life;

public:
  Character(string name, int life);
  ~Character();

  bool Hit(int);
  void Go(char move);
  int GetLife() const;
  bool IsAlive() const;
  void Print() const;
};

#endif