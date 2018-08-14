#include <iostream>

int main() {
  int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
  std::cout << "Enter four integers: ";
  std::cin >> n1 >> n2 >> n3 >> n4;
  int min = n1;
  if (n2 < min) {
    min = n2;
  }
  if (n3 < min) {
    min = n3;
  }
  if (n4 < min) {
    min = n4;
  }
  std::cout << "Their minimum is " << min << '\n';
  
  return 0;
}
