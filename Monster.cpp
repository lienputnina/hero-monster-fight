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
  level = monsterLevel > 0 ? monsterLevel : 1;
};

int Monster::GetLevel() const { return level; };

void Monster::Print() const {
  cout << "PrintMonster: " << endl;
  Character::Print();

  if (IsAlive()) {
    cout << name << "'s level: " << GetLevel() << endl;
  };

  cout << "\n";
}