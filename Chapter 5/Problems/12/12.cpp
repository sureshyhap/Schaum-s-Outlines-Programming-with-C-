#include <iostream>

int permutation(int n, int k);

int main(int argc, char* argv[]) {
  std::cout << "Enter n and k for permutation: ";
  int n, k;
  std::cin >> n >> k;
  std::cout << "Their perrmutation is " << permutation(n, k) << '.';
  
  return 0;
}

// Not robust
int permutation(int n, int k) {
  int product = 1;
  int i = n;
  while (i > n - k) {
    product *= i--;
  }
  return product;
}
