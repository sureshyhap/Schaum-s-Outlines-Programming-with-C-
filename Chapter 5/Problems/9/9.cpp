#include <iostream>

float average(float, float, float, float);

int main(int argc, char* argv[]) {
  std::cout << "Enter four numbers to be averaged: ";
  float first, second, third, fourth;
  std::cin >> first >> second >> third >> fourth;
  std::cout << "The average is " << average(first, second, third, fourth) << '.';
  
  return 0;
}

float average(float x1, float x2, float x3, float x4) {
  return (x1 + x2 + x3 + x4) / 4;
}
