#include <iostream>

int gcf(int x, int y);

int main(int argc, char* argv[]) {
  std::cout << "Enter two integers to find the GCF of: ";
  int x, y;
  std::cin >> x >> y;
  std::cout << "The GCF is " << gcf(x, y) <<  '.';
  
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
