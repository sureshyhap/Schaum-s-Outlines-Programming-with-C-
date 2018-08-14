#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
  for (double x = 0; x < 2; x += .2) {
    std::cout << x << '\t' << cos(x) * cos(x) + sin(x) * sin(x) << '\t' << 1
              << '\n';
  }

  return 0;
}









