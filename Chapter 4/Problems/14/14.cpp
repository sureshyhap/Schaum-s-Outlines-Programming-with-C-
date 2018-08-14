#include <iostream>

int main() {
  int first, second;
  std::cout << "Enter two positive integers: ";
  std::cin >> first >> second;

  int m = first, n = second;
  for (int r = 1; r != 0; ) {
    // The Euclidean Algorithm to find the GCF of two numbers

    // This works even if n > m!
    r = m % n;
    m = n;
    n = r;
  }

  std::cout << "The GCF of " << first << " and " << second << " is " << m << ".";
  
  return 0;
}
