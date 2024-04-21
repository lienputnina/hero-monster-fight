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

  //   MelnaisBruņinieks.Print(MelnaisBruņinieks);
  //   cout << "\n";

  cout << "Lāčplēsis is fighting Kangars." << endl;
  Lāčplēsis.Kill(Kangars);
  cout << "\n";

  Kangars.Print(Kangars);
  cout << "\n";

  cout << "Lāčplēsis is fighting MelnaisBruņinieks." << endl;
  cout << "MelnaisBruņinieks is eating Lāčplēsis." << endl;
  MelnaisBruņinieks.Eat(Lāčplēsis);
  //   cout << "MelnaisBruņinieks now has " << MelnaisBruņinieks.GetHeads()
  //        << " heads." << endl; // update this
  cout << "\n";

  Lāčplēsis.Print(Lāčplēsis);
  cout << "\n";

  //   Kangars.Print(Kangars);
  //   cout << "\n";

  //   MelnaisBruņinieks.Print(MelnaisBruņinieks);
  //   cout << "\n";

  //   cout << "Lāčplēsis lies defeated. Who will now fight for our nation?" <<
  //   endl; cout << "\n";

  return 0;
};