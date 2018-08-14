#include <iostream>

double num_deriv(double (*pf)(double x), double x_val, double h);
double cube(double x);

int main(int argc, char* argv[]) {
  std::cout << num_deriv(&cube, 5, .1);
  
  return 0;
}

double num_deriv(double (*pf)(double x), double x_val, double h) {
  return ((*pf)(x_val + h) - (*pf)(x_val - h)) / (2 * h);
}

double cube(double x) {
  return x * x * x;
}
