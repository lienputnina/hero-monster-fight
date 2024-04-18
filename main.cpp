#include "./Hero.h"
#include "./Monster.h"
#include "Boss.h"

#include <iostream>
#include <ostream>

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
  cout << "Lāčplēsis got " << Lāčplēsis.GetExperience() << " experience."
       << endl;
  cout << "Kangars went to medieval jail." << endl;
  cout << "\n";

  cout << "Lāčplēsis is fighting MelnaisBruņinieks." << endl;
  cout << "MelnaisBruņinieks is eating Lāčplēsis." << endl;
  MelnaisBruņinieks.Eat(Lāčplēsis);
  cout << "MelnaisBruņinieks now has " << MelnaisBruņinieks.GetHeads()
       << " heads." << endl;
  cout << "\n";

  Lāčplēsis.Print(Lāčplēsis);
  cout << "\n";

  Kangars.Print(Kangars);
  cout << "\n";

  MelnaisBruņinieks.Print(MelnaisBruņinieks);
  cout << "\n";

  cout << "The legend says Lāčplēsis and MelnaisBruņinieks are still "
          "fighting to this day."
       << endl;
  cout << "\n";

  return 0;
};