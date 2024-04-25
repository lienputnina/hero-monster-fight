#include "./Hero.h"
#include "./Monster.h"
#include "Boss.h"

#include <iostream>
#include <ostream>

int main() {
  Hero Lāčplēsis("Lāčplēsis", 8, 6);
  Monster Kangars("Kangars", 6, 5);
  Boss MelnaisBruņinieks("MelnaisBruņinieks", 8, 10, 3);

  Lāčplēsis.Print();
  Kangars.Print();
  MelnaisBruņinieks.Print();

  cout << "Lāčplēsis is fighting Kangars." << endl;
  Lāčplēsis.Kill(Kangars);
  Kangars.Print();

  cout << "Lāčplēsis is fighting MelnaisBruņinieks." << endl;
  cout << "MelnaisBruņinieks is eating Lāčplēsis." << endl;
  MelnaisBruņinieks.Eat(Lāčplēsis);
  cout << "\n";

  Lāčplēsis.Print();
  Kangars.Print();
  MelnaisBruņinieks.Print();

  cout << "Lāčplēsis lies defeated. Who will now fight for our nation?" << endl;
  cout << "\n";

  return 0;
};