#include <iostream>

int digit(int n, int k);
int pow10(int x);

int main(int argc, char* argv[]) {
  std::cout << "Enter a number and a digit to extract: ";
  int n, k;
  std::cin >> n >> k;
  std::cout << "The digit is " << digit(n, k) << '.';
  
  return 0;
}

// Watch out for integer overflow
int digit(int n, int k) {
  return (n % pow10(k + 1)) / pow10(k);
}

int pow10(int x) {
  int product = 1;
  for (int i = 0; i < x; ++i) {
    product *= 10;
  }
  return product;
}
