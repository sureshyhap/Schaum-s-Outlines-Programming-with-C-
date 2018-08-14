#include <iostream>

float* mirror(float* p[], int n);

int main(int argc, char* argv[]) {
  int n = 5;
  float x = 3, y = 1, z = 4, s = 3, t = 8;
  float* p_a[n] = {&x, &y, &z, &s, &t};
  float* p = mirror(p_a, n);
  for (int i = 0; i < n; ++i) {
    std::cout << p[i] << " ";
  }
  return 0;
}

float* mirror(float* p[], int n) {
  float* a = new float[n];
  for (int i = 0; i < n; ++i) {
    a[i] = *(p[n - i - 1]);
  }
  return a;
}
