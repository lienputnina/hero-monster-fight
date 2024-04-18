#include "./Hero.h"
#include "./Monster.h"
#include "Boss.h"

#include <iostream>

int main() {
  Hero Lāčplēsis("Lāčplēsis", 8, 6);
  Monster Kangars("Kangars", 6, 5);
  Boss MelnaisBruņinieks("MelnaisBruņinieks", 8, 10, 3);

  Lāčplēsis.Print(Lāčplēsis);
  cout << "\n";

  Kangars.Print(Kangars);
  cout << "\n";

  MelnaisBruņinieks.Print(MelnaisBruņinieks);
  cout << "\n";

  cout << "Lāčplēsis fights Kangars." << endl;
  Lāčplēsis.Kill(Kangars);
  cout << "\n";

  cout << "Lāčplēsis is fighting MelnaisBruņinieks." << endl;
  cout << "MelnaisBruņinieks is eating Lāčplēsis." << endl;

  cout << "\n";
  MelnaisBruņinieks.Eat(Lāčplēsis);

  Lāčplēsis.Print(Lāčplēsis);
  cout << "\n";

  Kangars.Print(Kangars);
  cout << "\n";

  MelnaisBruņinieks.Print(MelnaisBruņinieks);
  cout << "\n";

  cout << "The legend says that Lāčplēsis and MelnaisBruņinieks are still "
          "fighting to this day."
       << endl;
  cout << "\n";

  return 0;
};