#include <iostream>

int combination_efficient(int n, int k);

int main(int argc, char* argv[]) {
  std::cout << "Enter n and k for combination: ";
  int n, k;
  std::cin >> n >> k;
  std::cout << "C(" << n << ", " << k << ") = "
	    << combination_efficient(n, k) << '.';
  
  return 0;
}

int combination_efficient(int n, int k) {
  int product = 1;
  for (int j = 0; j < k; ++j) {
    product *= (n - j);
    product /= (j + 1);
  }
  return product;
}
