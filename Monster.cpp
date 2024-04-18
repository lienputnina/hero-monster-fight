#include "Monster.h"
#include <iostream>

/*
1.Initializing a Monster instance with specific names for 'name' and 'life'.
variables, inherited from the base class ('Character'). The initializer list
ensures that the base class constructor runs first, thus correctly initializing
the inherited parameters.
2.Initializing the level variable, specific for the
Monster class
*/
Monster::Monster(string monsterName, int monsterLife, int monsterLevel)
    : Character(monsterName, monsterLife) {
  // Setting the default monster level to 1 to avoid a negative level value
  level = monsterLevel <= 0 ? 1 : monsterLevel;
};

/*
Since no resource allocation was performed, the destructor is empty. When its
its execution completes, the base class constructor will be called.
*/
Monster::~Monster(){};

int Monster::GetLevel() const {
  cout << "Monster level: " << level << endl;
  return level;
};

bool Monster::IsAlive() const { return Character::IsAlive(); };

void Monster::Print() const {
  string monsterState = IsAlive() ? "alive" : "dead";

  cout << "PrintMonster: " << name << " is " << monsterState << endl;
  if (IsAlive()) {
    cout << "Monster life: " << life << endl;
    cout << "Monster level: " << level << endl;
  }
}