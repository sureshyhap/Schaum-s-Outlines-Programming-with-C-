#include <iostream>

int main() {
  float CM_PER_INCH = 2.54;
  std::cout << "Enter a number of inches: ";
  double length_inch = 0, length_cm = 0;
  std::cin >> length_inch;
  length_cm = length_inch * CM_PER_INCH;
  std::cout << length_inch << " inches equals " <<
               length_cm << " centimeters."  << std::endl;
  
  return 0;
}
