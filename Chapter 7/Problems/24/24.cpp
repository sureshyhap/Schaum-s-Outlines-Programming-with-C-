#include <iostream>

double trap(double (*pf)(double x), double a, double b, int n);
double square(double x);

int main(int argc, char* argv[]) {
  std::cout << trap(&square, 1, 2, 100);
  
  return 0;
}

double trap(double (*pf)(double x), double a, double b, int n) {
  double h = (b - a) / n;
  double sum = 0;
  for (int i = 0; i <= n; ++i) {
    sum += (2 * (*pf)(a + i * h));
  }
  sum -= (*pf)(a);
  sum -= (*pf)(b);
  sum *= (h / 2);
  return sum;
}

double square(double x) {
  return x * x;
}
