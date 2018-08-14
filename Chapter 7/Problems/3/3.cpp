#include <iostream>

void make_new(float* original[], int n, float values[]);

int main(int argc, char* arg[]) {
  int n = 5;
  float* (*p) = new float*[n];
  for (int i = 0; i < n; ++i) {
    **(p + i) = i * 3;
  }
  float arr[n];
  make_new(p, n, arr);
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }
  
  return 0;
}

void make_new(float* original[], int n, float values[]) {
  for (int i = 0; i < n; ++i) {
    values[i] = *(original[i]);
  }
}
