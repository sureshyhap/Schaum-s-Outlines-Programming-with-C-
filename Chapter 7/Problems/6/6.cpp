#include <iostream>

float* ptr_max(float* a[], int n);

int main(int argc, char* argv[]) {
  float arr[] = {4, 7, 5, 1, 3};
  float* p_a[] = {arr + 2, arr + 3, arr, arr + 1, arr + 4};
  int size = sizeof(p_a) / sizeof(float*);
  std::cout << *ptr_max(p_a, size);
  
  return 0;
}

float* ptr_max(float* a[], int n) {
  float max = *(a[0]);
  float* p_max = a[0];
  for (int i = 0; i < n; ++i) {
    if (*(a[i]) > max) {
      max = *(a[i]);
      p_max = a[i];
    }
  }
  return p_max;
}
