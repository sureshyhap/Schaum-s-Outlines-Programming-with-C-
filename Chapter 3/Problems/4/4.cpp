#include <iostream>

int main() {
  int x = 0, y = 0;
  std::cout << "Enter two integers: ";
  std::cin >> x >> y;
  std::cout << (x <= y ? x : y) << " <= " << (x <= y ? y : x);
  
  return 0;
}

