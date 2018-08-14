#include <iostream>

void ind_sel_sort(float* p[], int n);

int main(int argc, char* argv[]) {
  float a[] = {54, 76, 3, 5, 34, 4, 3, 1, 4, 2, 3};
  int size = sizeof(a) / sizeof(float);
  float* (*p_a) = new float*[size];
  for (int i = 0; i < size; ++i) {
    *p_a[i] = a[i];
  }
  ind_sel_sort(p_a, size);
  for (int i = 0; i < size; ++i) {
    std::cout << *p_a[i] << " ";
  }
  
  return 0;
}

void ind_sel_sort(float* p[], int n) {
  for (int i = 0; i < n; ++i) {
    float min = *p[i];
    int min_index = i;
    for (int j = i; j < n; ++j) {
      if (*p[j] < min) {
	min = *p[j];
	min_index = j;
      }
    }
    float* temp = p[i];
    p[i] = p[min_index];
    p[min_index] = temp;
  }
}
