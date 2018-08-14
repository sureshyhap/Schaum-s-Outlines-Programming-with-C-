#include <iostream>
#include <cmath>

double sum(double (*pf)(double x), int n);

int main(int argc, char* argv[]) {
  double sum_sqrt = sum(&sqrt, 4);
  std::cout << sum_sqrt;
  
  return 0;
}

double sum(double (*pf)(double x), int n) {
  double s = 0;
  for (int i = 1; i <= n; ++i) {
    s += (*pf)(i);
  }
  return s;
}
