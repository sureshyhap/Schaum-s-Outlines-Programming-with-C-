#include <iostream>

float sum(float* p[], int n);

int main(int argc, char* argv[]) {
  float a[] = {56, 23, 7, 3, 56, 23, 78, 45, 4};
  int size = sizeof(a) / sizeof(float);
  float* (*p_a) = new float*[size];
  for (int i = 0; i < size; ++i) {
    *(p_a[i]) = a[i];
  }
  std::cout << sum(p_a, size);
  
  return 0;
}

float sum(float* p[], int n) {
  float sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += *(p[i]);
  }
  return sum;
}
