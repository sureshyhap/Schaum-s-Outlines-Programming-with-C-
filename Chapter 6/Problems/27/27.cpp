#include <iostream>

float innerProduct(float a[], int n, float b[]);

int main(int argc, char* argv[]) {
  float a[] = {2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
  float b[] = {4.0, -3.0, 2.0, -1.0, 0.0, 0.0};
  std::cout << innerProduct(a, 5, b);
  
  return 0;
}

float innerProduct(float a[], int n, float b[]) {
  float sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += (a[i] * b[i]);
  }
  return sum;
}
