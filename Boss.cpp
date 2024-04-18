#include "Boss.h"
#include "Monster.h"

#include <iostream>

/*
1.Initializing a Boss instance with specific names for 'name', 'life' and level.
variables, inherited from the base class ('Monster'). The initializer list
ensures that the base class constructor runs first, thus correctly initializing
the inherited parameters.
2.Initializing the heads variable, specific for the
Boss class.
*/
Boss::Boss(string bossName, int bossLife, int bossLevel, int bossHeads)
    : Monster(bossName, bossLife, bossLevel) {
  // Setting the default boss level to 1 to avoid a negative  value
  level = bossLevel <= 0 ? 1 : bossLevel;
  // Setting the default boss heads to 1 to avoid a negative  value
  heads = bossHeads <= 0 ? 1 : bossHeads;
};

/*
The Boss destructor is empty, so the Monster destructor
will be called. Since the Monster destructor is also empty, the program will
execute the Character destructor, same as in Monster class.
*/
Boss::~Boss(){};

int Boss::GetHeads() const {
  cout << "Boss's heads: " << heads << endl;
  return heads;
};

bool Boss::IsAlive() const { return Monster::IsAlive(); };

/*
Implementing Eat method with a Hero object as a parameter to access Hero
life. GetLife() is inherited from Character class.
*/
void Boss::Eat(Hero &hero) {
  int lifeRaise = hero.GetLife();
  life > 10 ? 10 : life += lifeRaise;
  heads++;
};

void Boss::Print(Boss &boss) const {
  string bossState = IsAlive() ? "alive" : "dead";

  cout << "PrintBoss: " << name << " is " << bossState << endl; // new line
  if (IsAlive()) {
    cout << name << "'s life: " << boss.GetLife() << endl;
    cout << name << "'s heads: " << boss.GetHeads() << endl;
    cout << name << "'s level: " << boss.GetLevel() << endl;
  }
}