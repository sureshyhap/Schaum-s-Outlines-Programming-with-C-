#include <iostream>

int main(){
  std::cout << "Enter a number of squares: ";
  int squares = 0;
  std::cin >> squares;
  int i = 1, sum = 0; 
  while (i <= squares) {
    sum += (i * i);
    ++i;
  }
  std::cout << "The sum is " << sum << ".";
  
  return 0;
}
