#include <iostream>

int min(int, int);
int min(int, int, int, int);

int main(int argc, char* argv[]) {
  std::cout << "Enter four integers: ";
  int first, second, third, fourth;
  std::cin >> first >> second >> third >> fourth;
  std::cout << "The min is " << min(first, second, third, fourth) << '.';

  return 0;
}

int min(int x, int y) {
  return x < y ? x : y;
}

int min(int a, int b, int c, int d) {
  int minimum = min(a, b);
  minimum = min(minimum, c);
  minimum = min(minimum, d);
  return minimum;
}
