#include <iostream>
#include <cmath>

double stdev(double x[], int n);

int main(int argc, char* argv[]) {
  double a[100] = {};
  int i = 0;
  do {
    std::cout << "Enter a number: (enter 0 to stop)";
    std::cin >> a[i++];
  } while (a[i - 1] != 0);

  double sum = 0;
  int j = 0;
  for (; a[j] != 0; ++j) {
    sum += a[j];
  }
  --j;
  double mean = double(sum) / j;
  std::cout << "Mean: " << mean << "\n\n";

  double std_dev = stdev(a, j);

  double deviation = 0, deviation_pos = 0, z = 0;
  for (int i = 0; a[i] != 0; ++i) {
    deviation = a[i] - mean;
    if (deviation < 0) {
      deviation_pos = deviation * -1;
    }
    z = deviation / std_dev;
    std::cout << a[i] << " deviation: " << deviation_pos << ". Z = " << z << ". Grade: ";
    if (z >= 1.5) {
      std::cout << 'A';
    }
    else if (z < 1.5 && z >= .5) {
      std::cout << 'B';
    }
    else if (z < .5 && z >= -.5) {
      std::cout << 'C';
    }
    else if (z < -.5 && z >= -1.5) {
      std::cout << 'D';
    }
    else if (z < 1.5) {
      std::cout << 'F';
    }
    std::cout << std::endl;


  }

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
