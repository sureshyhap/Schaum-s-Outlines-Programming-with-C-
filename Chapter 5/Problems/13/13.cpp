#include <iostream>

int fact(int n);
int combination(int n, int k);

int main(int argc, char* argv[]) {
  std::cout << "Enter n and k for combination: ";
  int n, k;
  std::cin >> n >> k;
  std::cout << "Their combination is " << combination(n, k) << '.';
  
  return 0;
}

int fact(int n) {
  int product = 1;
  for (; n > 1; --n) {
    product *= n;
  }
  return product;
}

// Not robust
int combination(int n, int k) {
  return fact(n) / (fact(k) * fact(n - k));
}
