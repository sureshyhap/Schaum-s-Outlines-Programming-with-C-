#include <iostream>

int main() {
  int x = 0, y = 0;
  std::cout << "Enter a value for x and y: ";
  std::cin >> x >> y;
  std::cout << "x + y = " << x + y << std::endl;
  std::cout << "x - y = " << x - y << std::endl;
  std::cout << "x * y = " << x * y << std::endl;
  std::cout << "x / y = " << x / y << std::endl;
  std::cout << "x % y = " << x % y << std::endl;
  
  return 0;
}
