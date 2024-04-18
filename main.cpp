#include "./Hero.h"
#include "./Monster.h"
#include "Boss.h"

#include <iostream>

// Todo: 1. Create a loop for Hero to kill Monster, 2. Write some comments
int main() {
  Hero Lāčplēsis("Lāčplēsis", 9, 6);
  Monster Kangars("Kangars", 8, 5);
  Boss MelnaisBruņinieks("MelnaisBruņinieks", 10, 10, 3);

  Lāčplēsis.Print();
  Kangars.Print();
  MelnaisBruņinieks.Print();

  Kangars.GetLevel();
  MelnaisBruņinieks.GetHeads();

  cout << "Lāčplēsis fights Kangars" << endl;
  Lāčplēsis.Kill(Kangars);
  Lāčplēsis.Print();
  Kangars.Print();
  cout << "\n";

  cout << "Lāčplēsis fights MelnaisBruņinieks." << endl;
  cout << "\n";

  MelnaisBruņinieks.Eat(Lāčplēsis);
  Lāčplēsis.Print();
  cout << "\n";

  MelnaisBruņinieks.Print();
  cout << "\n";

  Lāčplēsis.Print();
  cout << "\n";

  Kangars.Print();
  cout << "\n";

  MelnaisBruņinieks.Print();
  cout << "\n";

  cout << "The legend says that Lāčplēsis and MelnaisBruņinieks are still "
          "fighting to this day."
       << endl;
  cout << "Only when MelnaisBruņinieks is defeated, will our nation be free!";
  cout << "\n";

  return 0;
};