#include "Boss.h"
#include "Character.h"
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
  level = bossLevel > 0 ? bossLevel : 1;
  heads = bossHeads > 0 ? bossHeads : 1;
};

int Boss::GetHeads() const { return heads; };

void Boss::Eat(Hero &hero) {
  int heroLife = hero.GetLife();
  life += heroLife;
  heads++;

  hero.Hit(heroLife);
};

void Boss::Print() const {
  cout << "PrintBoss: " << endl;
  Character::Print();

  if (IsAlive()) {
    cout << name << "'s heads: " << GetHeads() << endl;
    cout << name << "'s level: " << GetLevel() << endl;
  };

  cout << "\n";
}