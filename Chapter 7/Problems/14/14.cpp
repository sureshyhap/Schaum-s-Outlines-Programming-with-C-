#include <iostream>

void abs(float* p[], int n);

int main(int argc, char* argv[]) {
  float a[] = {56, -23, -7, 3, -56, 23, 78, -45, 4};
  int size = sizeof(a) / sizeof(float);
  float* (*p_a) = new float*[size];
  for (int i = 0; i < size; ++i) {
    *(p_a[i]) = a[i];
  }
  abs(p_a, size);
  for (int i = 0; i < size; ++i) {
    std::cout << *(p_a[i]) << " ";
  }

  return 0;
}

void abs(float* p[], int n) {
  for (int i = 0; i < n; ++i) {
    if (*(p[i]) < 0) {
      *(p[i]) *= -1;
    }
  }
}
