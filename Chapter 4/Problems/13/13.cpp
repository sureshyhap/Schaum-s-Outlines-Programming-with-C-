#include <iostream>

int main() {
  double num = 0;
  std::cout << "Enter a positive number: ";
  std::cin >> num;

  int sq_rt = 1;
  for (; sq_rt * sq_rt <= num; ++sq_rt) {
    ;
  }
  --sq_rt;
  
  std::cout << "The integer square root is " << sq_rt << ".\n";
  
  return 0;
}
