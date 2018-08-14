#include <iostream>

void computeCircle(float& a, float& c, float r);

int main(int argc, char* argv[]) {
  std::cout << "Enter a radius: ";
  float rad;
  std::cin >> rad;
  float area, circumference;
  computeCircle(area, circumference, rad);
  std::cout << "Area = " << area << std::endl;
  std::cout << "Circumference = " << circumference;
  
  return 0;
}

void computeCircle(float& a, float& c, float r) {
  const float PI = 3.14159265359;
  a = PI * r * r;
  c = 2 * PI * r;
}
