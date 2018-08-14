#include <iostream>
#include <cmath>

double num_deriv(double (*pf)(double x), double x_val, double h);
double cube(double x);

int main(int argc, char* argv[]) {
  std::cout << num_deriv(&sqrt, 4, .1) << std::endl;
  std::cout << num_deriv(&cos, 1 / 6, .1) << std::endl;
  std::cout << num_deriv(&exp, 0, .1) << std::endl;
  std::cout << num_deriv(&log, 1, .1) << std::endl;

  return 0;
}

double num_deriv(double (*pf)(double x), double x_val, double h) {
  return ((*pf)(x_val + h) - (*pf)(x_val - h)) / (2 * h);
}

double cube(double x) {
  return x * x * x;
}
