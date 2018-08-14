#include <iostream>

int isTriangular(int n);

int main(int argc, char* argv[]) {
  std::cout << "Enter a positive integer: ";
  int a;
  std::cin >> a;
  std::cout << a << " is ";
  std::cout << (isTriangular(a) == true ? "" : "not ");
  std::cout << "triangular."; 
  
  return 0;
}

int isTriangular(int n) {
  for (int i = 0; n > 0; ++i) {
    n -= i;
  }
  if (n < 0) {
    return false;
  }
  // n == 0
  else {
    return true;
  }
}
