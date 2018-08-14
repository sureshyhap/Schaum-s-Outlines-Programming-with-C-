#include <iostream>

int main() {
  int n = 0, d = 0;
  std::cout << "Enter two positive integers: ";
  std::cin >> n >> d;
  if ((n % d) == 0) {
    std::cout << n << " is divisible by " << d << '\n';
  }
  
  return 0;
}
