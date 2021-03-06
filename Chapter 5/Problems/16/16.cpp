#include <iomanip>

#include <iostream>

int combination_efficient(int n, int k);


int main(int argc, char* argv[]) {
  const int NUM_ROWS = 12;
  for (int i = 0; i <= NUM_ROWS; ++i) {
    for (int k = 0; k < NUM_ROWS - i; ++k) {
      std::cout << "\t";
    }
    for (int j = 0; j <= i; ++j) {
      std::cout << combination_efficient(i, j) << "\t\t";
    }
    std::cout << '\n';
  }
  
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
