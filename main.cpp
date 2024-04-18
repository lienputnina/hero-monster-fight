#include "./Hero.h"
#include "./Monster.h"

#include <iostream>

int main() {
  Hero Lāčplēsis("Lāčplēsis", 9, 6);
  Monster Kangars("Kangars", 8, 5);

  Kangars.GetLevel();

  cout << "Lāčplēsis is fighting Kangars" << endl;
  Lāčplēsis.Kill(Kangars);

  Lāčplēsis.Print();
  Kangars.Print();

  return 0;
};