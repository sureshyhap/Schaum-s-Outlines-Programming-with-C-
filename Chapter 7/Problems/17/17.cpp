#include <iostream>

void ind_ins_sort(float* p[], int n);

int main() {
  float a[] = {5, 3, 78, 4, 2, 7, 5, 3, 1, 6, 1, 4};
  int size = sizeof(a) / sizeof(float);
  float* (*p_a) = new float*[size];
  for (int i = 0; i < size; ++i) {
    *p_a[i] = a[i];
  }
  ind_ins_sort(p_a, size);
  for (int i = 0; i < size; ++i) {
    std::cout << *p_a[i] << " ";
  }
  
  return 0;
}

void ind_ins_sort(float* p[], int n) {
  for (int i = 1; i < n; ++i) {
    int j = i - 1;
    float* temp = p[i];
    for (; *temp < *p[j]; --j) {
      p[j + 1] = p[j];
    }
    p[j + 1] = temp;
  }
}
