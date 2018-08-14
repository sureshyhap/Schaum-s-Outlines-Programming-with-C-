#include <iostream>

int main() {
  std::cout << "Enter a six-digit integer: ";
  int six_d = 0;
  std::cin >> six_d;
  if (six_d < 0) {
    six_d = -six_d;
  }
  if (six_d < 1e5 || six_d > (1e6 - 1)) {
    std::cout << "Not in raage.";
    exit(1);
  }
  int sum = int(six_d / 1e5) +
    (int(six_d / 1e4) % 10) +
    (int(six_d / 1e3) % 10) +
    (int(six_d / 1e2) % 10) +
    (int(six_d / 1e1) % 10) +
    int(six_d % 10);

  std::cout << "The sum of the digits is: " << sum;
  
  return 0;
}
