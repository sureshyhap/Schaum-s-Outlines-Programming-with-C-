#include <iostream>

void computeSphere(float& v, float& s, float r);

int main(int argc, char* argv[]) {
  std::cout << "Enter a radius: ";
  float rad, vol, surf_ar;
  std::cin >> rad;
  computeSphere(vol, surf_ar, rad);
  std::cout << "V = " << vol << std::endl;
  std::cout << "SA = " << surf_ar;
  
  return 0;
}

void computeSphere(float& v, float& s, float r) {
  const float PI = 3.14159265359;
  v = (4.0 / 3) * PI * r * r * r;
  s = 4 * PI * r * r;
}
