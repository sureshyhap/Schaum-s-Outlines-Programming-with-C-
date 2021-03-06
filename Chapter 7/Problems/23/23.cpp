#include <iostream>

double root(double (*pf)(double x), double a, double b, double n);
double func(double x);

int main(int argc, char* argv[]) {
  std::cout << root(&func, 1, 2, 100);
  
  return 0;
}

// assume initial a and b are correct limiters
double root(double (*pf)(double x), double a, double b, double n) {
  double c = (a + b) / 2;
  if (n == 0) {
    return c;
  }
  if ((*pf)(c) * (*pf)(b) < 0) {
    return root(pf, c, b, n - 1);
  }
  else if ((*pf)(a) * (*pf)(c) < 0) {
    return root(pf, a, c, n - 1);
  }
}

double func(double x) {
  return x * x - 2;
}
