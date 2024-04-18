#include "Boss.h"
#include "Monster.h"

#include <iostream>

/*
Initializing a Boss instance with specific names for the inherited 'name',
'life' and 'level''variables. The initializer list ensures that the Monster
class constructor runs first. This way the inherited parameters are initialized
correctly.
*/
Boss::Boss(string bossName, int bossLife, int bossLevel, int bossHeads)
    : Monster(bossName, bossLife, bossLevel) {
  // Setting the default boss level to 1 to avoid a negative  value
  level = bossLevel <= 0 ? 1 : bossLevel;
  // Setting the default boss heads to 1 to avoid a negative  value
  heads = bossHeads <= 0 ? 1 : bossHeads;
};

/*
The destructor is empty, so that it could use the implementation of Character
class constructor
*/
Boss::~Boss(){};

int Boss::GetHeads() const { return heads; };

bool Boss::IsAlive() const { return Monster::IsAlive(); };

void Boss::Eat(Hero &hero) {
  int lifeRaise = hero.GetLife();
  life > 10 ? 10 : life += lifeRaise;
  heads++;
};

void Boss::Print(Boss &boss) const {
  string bossState = IsAlive() ? "alive" : "dead";

  cout << "PrintBoss: " << endl;
  cout << name << " is " << bossState << endl;

  if (IsAlive()) {
    cout << name << "'s life: " << boss.GetLife() << endl;
    cout << name << "'s heads: " << boss.GetHeads() << endl;
    cout << name << "'s level: " << boss.GetLevel() << endl;
  }
}