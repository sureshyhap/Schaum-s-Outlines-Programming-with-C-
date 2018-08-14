#include <iostream>

int isPentagonal(int n);

int main(int argc, char* argv[]) {
  std::cout << "Enter a positive integer for pentagonal testing: ";
  int a;
  std::cin >> a;
  std::cout << a << " is ";
  std::cout << (isPentagonal(a) == true ? "" : "not ");
  std::cout << "pentagonal.";
  
  return 0;
}

int isPentagonal(int n) {
  // Not the best but simplest to consider 0 separately
  if (n == 0) {
    return true;
  }
  for (int i = 0, total = 0; total < n; ++i) {
    total += (1 + 3 * i);
    if (total == n) {
      return true;
    }
  }
  return false;
}
