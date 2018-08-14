#include <iostream>

// Only works for n < 14
int fact(int n);

int main(int argc, char* argv[]) {
  std::cout << "Enter a positive integer for the factorial functions: ";
  int n;
  std::cin >> n;
  std::cout << n << "! = " << fact(n) << '.';
  
  return 0;
}

int fact(int n) {
  int product = 1;
  for (; n > 1; --n) {
    product *= n;
  }
  return product;
}
