#include "Hero.h"
#include <iostream>

/*
Initializing a Hero instance with specific names for the inherited 'name' and
'life' variables. The initializer list ensures that the Character class
constructor runs first. This way the inherited parameters are initialized
correctly.
*/
/*
To initialize a Hero object, need to initialize a Character object first, since
Hero object will also be a Character object.
*/
Hero::Hero(string heroName, int heroLife, int heroExperience)
    : Character(heroName, heroLife) {
  experience = heroExperience;
};

// Using Monster &monster as params to access Monster methods
void Hero::Kill(Monster &monster) {
  int monsterLife = monster.GetLife();   // comes from Character
  int monsterLevel = monster.GetLevel(); // comes from Monster

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
