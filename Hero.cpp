#include "Hero.h"
#include "Monster.h"
#include <iostream>

/*
1.Initializing a Hero instance with specific names for the inherited 'name' and
'life' variables. The initializer list ensures that the Character class
constructor runs first. This way the inherited parameters are initialized
correctly.
*/
Hero::Hero(string heroName, int heroLife, int heroExperience)
    : Character(heroName, heroLife) {
  experience = heroExperience;
};

/*
The destructor is empty, so that it could use the implementation of Character
class constructor
*/
Hero::~Hero(){};

void Hero::Kill(Monster &monster) {
  int experienceRaise = monster.GetLife() * monster.GetLevel();
  experience += experienceRaise;
};

int Hero::GetExperience() const { return experience; }

bool Hero::IsAlive() const { return Character::IsAlive(); };

void Hero::Print(Hero &hero) {
  string heroState = IsAlive() ? "alive" : "dead";

  cout << "PrintHero: " << endl;
  cout << name << " is " << heroState << endl;
  if (IsAlive()) {
    cout << name << "'s life: " << hero.GetLife() << endl;
    cout << name << "'s experience: " << hero.GetExperience() << endl;
  }
}
