#include <iostream>

int main() {
  std::cout << "Enter a number of positive number of squares: ";
  int n = 0;
  std::cin >> n;

  int i = 1, sum = 0;
  do {
    sum += i * i;
  } while (i++ < n);

  std::cout << "The sum is " << sum << ".";
  
  return 0;
}
