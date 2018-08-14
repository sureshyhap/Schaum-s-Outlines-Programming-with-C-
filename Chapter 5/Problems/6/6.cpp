#include <iostream>

int min(int, int, int, int);

int main(int argc, char* argv[]) {
  std::cout << "Enter four integers: ";
  int first, second, third, fourth;
  std::cin >> first >> second >> third >> fourth;

  std::cout << "The minimum of these is "
	    << min(first, second, third, fourth) << '.' << std::endl;
  
  return 0;
}

int min(int a, int b, int c, int d) {
  int min = a;
  if (b < min) {
    min = b;
  }
  if (c < min) {
    min = c;
  }
  if (d < min) {
    min = d;
  }
  return min;
}
