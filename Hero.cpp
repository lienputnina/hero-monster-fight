#include "Hero.h"
#include "Character.h"
#include "Monster.h"
#include <iostream>

/*
Initializing a Hero instance with specific names for the inherited 'name' and
'life' variables. The initializer list ensures that the Character class
constructor runs first. This way the inherited parameters are initialized
correctly.
*/
Hero::Hero(string heroName, int heroLife, int heroExperience)
    : Character(heroName, heroLife) {
  experience = heroExperience;
};

void Hero::Kill(Monster &monster) {
  int monsterLife = monster.GetLife();
  int monsterLevel = monster.GetLevel();

  int heroExperienceBump = monsterLife * monsterLevel;
  monster.Hit(monsterLife);

  experience += heroExperienceBump;
};

int Hero::GetExperience() const { return experience; }

void Hero::Print() const {
  cout << "PrintHero: " << endl;
  Character::Print();

  if (IsAlive()) {
    cout << name << "'s experience: " << GetExperience() << endl;
  };

  cout << "\n";
}
