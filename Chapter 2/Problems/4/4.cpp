#include <iostream>

int main() {
  int x = 3, y = 7, z = 2;
  z -= (x + y++);
  
  return 0;
}
