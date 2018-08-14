#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {
  for (double x = 0; x < 2; x += .2) {
    std::cout << x << '\t' << cos(2 * x) << '\t' << 2 * cos(x) * cos(x) - 1
	      << '\n';
  }
  
  return 0;
}
