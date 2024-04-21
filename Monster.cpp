#include "Monster.h"
#include <iostream>

/*
Initializing a Monster instance with specific names for the inherited 'name'
and 'life' variables. The initializer list ensures that the Character class
constructor runs first. This way the inherited parameters are initialized
correctly.
*/
Monster::Monster(string monsterName, int monsterLife, int monsterLevel)
    : Character(monsterName, monsterLife) {
  // Setting the default monster level to 1 to avoid a negative level value
  level = monsterLevel <= 0 ? 1 : monsterLevel;
};

/*
The destructor is empty, so that it could use the implementation of Character
class constructor
*/
Monster::~Monster(){};

int Monster::GetLevel() const { return level; };

bool Monster::IsAlive() const { return Character::IsAlive(); };

void Monster::Print(Monster &monster) const {
  string monsterState = IsAlive() ? "alive." : "dead.";

  cout << "PrintMonster: " << endl;
  cout << name << " is " << monsterState << endl;

  if (IsAlive()) {
    cout << name << "'s life: " << monster.GetLife() << endl;
    cout << name << "'s level: " << monster.GetLevel() << endl;
  }
}