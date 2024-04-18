#include "Hero.h"
#include "Monster.h"
#include <iostream>

/*
1.Initializing a Hero instance with specific names for 'name' and 'life'.
variables, inherited from the base class ('Character'). The initializer list
ensures that the base class constructor runs first, thus correctly initializing
the inherited parameters.
2.Initializing the experience variable, specific for the Hero class.
*/
Hero::Hero(string heroName, int heroLife, int heroExperience)
    : Character(heroName, heroLife) {
  experience = heroExperience; // Do I need a check/validation for this?
};

/*
Since no resource allocation was performed, the destructor is empty. When its
its execution completes, the base class constructor will be called.
*/
Hero::~Hero(){};

/*
Implementing Kill method with a Monster object as a parameter to access Monster
life and Monster level. GeLife method is available through inheritance from the
Character class.
*/
int Hero::Kill(Monster &monster) {
  int experienceRaise = monster.GetLife() * monster.GetLevel();
  experience += experienceRaise;

  cout << name << " got " << experience << " XP" << endl;
  return experience;
};

bool Hero::IsAlive() const { return Character::IsAlive(); };

void Hero::Print() {
  string heroState = IsAlive() ? "alive" : "dead";

  cout << "PrintHero: "
       << "Hero " << name << " is " << heroState << endl;
  if (IsAlive()) {
    cout << "Hero life: " << life << endl;
    cout << "Hero experience: " << experience << endl;
  }
}
