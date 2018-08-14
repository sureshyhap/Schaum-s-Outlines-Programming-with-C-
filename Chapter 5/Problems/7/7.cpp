#include <iostream>

int max(int, int);
int max(int, int, int, int);

int main(int argc, char* argv[]) {
  std::cout << "Enter four integers: ";
  int first, second, third, fourth;
  std::cin >> first >> second >> third >> fourth;
  std::cout << "The max is " << max(first, second, third, fourth) << '.';
  
  return 0;
}

int max(int x, int y) {
  return x > y ? x : y;
}

int max(int a, int b, int c, int d) {
  int maximum = max(a, b);
  maximum = max(maximum, c);
  maximum = max(maximum, d);
  return maximum;
}
