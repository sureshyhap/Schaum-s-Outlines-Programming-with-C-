#include <iostream>

int main() {
  std::cout << "Enter two integers: ";
  int num1 = 0, num2 = 0;
  std::cin >> num1 >> num2;
  std::cout << ((num1 % num2 == 0 || num2 % num1 == 0) ? "multiple" : "not");
  
  return 0;
}
