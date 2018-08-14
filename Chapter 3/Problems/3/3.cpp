#include <iostream>

int main() {
  int n1 = 0, n2 = 0, n3 = 0;
  
  std::cout << "Enter three integers: ";
  std::cin >> n1 >> n2 >> n3;
  
  int median = 0;
  
  if (n1 < n2) {
    if (n2 < n3) {
      median = n2;
    }
    else {
      if (n1 < n3) {
	median = n3;
      }
      else {
	median = n1;
      }
    }
  }
  else {
    if (n1 < n3) { //////////////// Check for equal values
      median = n1;
    }
    else {
      if (n3 < n2) {
	median = n2;
      }
      else {
	median = n3;
      }
    }
  }

  std::cout << "Their median is " << median << '\n';
  
  return 0;
}
