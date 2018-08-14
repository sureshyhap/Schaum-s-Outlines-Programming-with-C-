#include <iostream>

int main() {
  std::cout << "Enter a number of squares: ";
  int n = 0;
  std::cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    sum += i * i;
  }

  std::cout << "The sum is " << sum << ".";
  
  return 0;
}
