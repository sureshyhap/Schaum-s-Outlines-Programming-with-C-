#include <iostream>

int lcm(int x, int y);
int gcf(int x, int y);

int main(int argc, char* argv[]) {
  std::cout << "Enter two numbers for LCM: ";
  int a, b;
  std::cin >> a >> b;
  std::cout << "LCM is " << lcm(a, b) << '.';
  
  return 0;
}

int gcf(int x, int y) {
  int z = y;
  while (y != 0) {
    y = x % y;
    x = z;
    z = y;
  }
  return x;
}

int lcm(int x, int y) {
  return (x * y) / gcf(x, y);
}
