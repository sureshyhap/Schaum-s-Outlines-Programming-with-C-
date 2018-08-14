#include <iostream>

double power(double x, int p);

int main(int argc, char* argv[]) {
  std::cout << "Enter a number and a power: ";
  double x;
  int p;
  std::cin >> x >> p;
  std::cout << power(x, p);
  
  return 0;
}

double power(double x, int p) {
  double product = 1;
  if (p > 0) {
    for (int i = 0; i < p; ++i) {
      product *= x;
    }
  }
  else if (p < 0) {
    int p_pos = -1 * p;
    for (int i = 0; i < p_pos; ++i) {
      product /= x;
    }
    
  }
  return product;
}
