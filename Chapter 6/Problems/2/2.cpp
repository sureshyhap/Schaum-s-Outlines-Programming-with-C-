#include <iostream>

int main(int argc, char* argv[]) {
  double a[4] = {};
  std::cout << "Enter 5 numbers:\n";

  for (int i = 4; i >= 0; --i) {
    std::cout << "\ta[" << i << "]: ";
    std::cin >> a[i];
  }

  std::cout << "In reverse order, they are:\n";
  for (int i = 0; i <= 4; ++i) {
    std::cout << "\ta[" << i << "]: " << a[i] << std::endl;
  }

  return 0;
}
