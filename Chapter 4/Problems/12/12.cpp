#include <iostream>

int main() {
  double x = 1;
  std::cout << "How many runs of the Babylonian Algorithm would you like? ";
  int iterations = 0;
  std::cin >> iterations;

  for (int i = 0; i < iterations; ++i) {
    x = (x + (2  / x)) / 2;
  }

  std::cout << "The square roott of 2 is approximately: " << x;
  
  return 0;
}
