#include <iostream>

int main(int argc, char* argv[]) {
  int a[100] = {};
  int i = 0;
  do {
    std::cout << "Enter a number: (enter 0 to stop)";
    std::cin >> a[i++];
  } while (a[i - 1] != 0);

  int sum = 0;
  int j = 0;
  for (; a[j] != 0; ++j) {
    sum += a[j];
  }
  --j;
  float mean = float(sum) / j;
  std::cout << "Mean: " << mean << "\n\n";

  for (int i = 0, deviation = 0; a[i] != 0; ++i) {
    deviation = mean - a[i];
    if (deviation < 0) {
      deviation *= -1;
    }
    std::cout << a[i] << " deviation: " << deviation << std::endl;
  }

  
  
  return 0;
}
