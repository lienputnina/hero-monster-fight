#include "Monster.h"

Monster::Monster(string monsterName, int monsterLife, int monsterLevel)
    : Character(monsterName, monsterLife) {
  // Setting the default monster level to 0 to avoid a negative level value
  level = monsterLevel <= 0 ? 1 : monsterLevel;
}