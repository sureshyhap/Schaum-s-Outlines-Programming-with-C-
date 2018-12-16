#include <iostream>
#include "Person.h"

int main(int argc, char* argv[]) {
  Date date(6, 5, 3945);
  Date date2(6, 3, 4784);
  Name name("Tudor", "Mary", "", "Queen", "I", "Bloody Mary");
  Person m(name, "England", date, date2, 0);
  std::cout << m;
  return 0;
}
