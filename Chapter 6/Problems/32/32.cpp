#include <iostream>
#include <cmath>

double stdev(double x[], int n);

int main(int argc, char* argv[]) {
  double x[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
  std::cout << stdev(x, 9);
  
  return 0;
}

double stdev(double x[], int n) {
  double sum;
  int i = 0;
  for (; i < n; ++i) {
    sum += x[i];
  }
  double mean = sum / i;

  double deviations_squared[n];
  double sum_dev = 0;
  for (int j = 0; j < n; ++j) {
    deviations_squared[i] = (mean - x[j]) * (mean - x[j]);
    sum_dev += deviations_squared[i];
  }
  double std_dev = sqrt(sum_dev / (n - 1));
  
  
}
