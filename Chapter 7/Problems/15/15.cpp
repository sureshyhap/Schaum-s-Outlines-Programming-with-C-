#include <iostream>

void sort(float* p[], int n);

int main(int argc, char* argv[]) {
  float a[] = {4, 7, 6, 5, 8, 6, 9, 2, 2, 1, 3};
  int size = sizeof(a) / sizeof(float);
  float* p_a[size] = {};
  for (int i = 0; i < size; ++i) {
    p_a[i] = a + i;
  }
  sort(p_a, size);
  for (int i = 0; i < size; ++i) {
    std::cout << *p_a[i] << " ";
  }
  
  return 0;
}

void sort(float* p[], int n) {
  for(int i = 0; i < n; ++i) {
    for (int j = 1; j < n - i; ++j) {
      if (*p[j - 1] > *p[j]) {
	float* p_temp = p[j - 1];
	p[j - 1] = p[j];
	p[j] = p_temp;
      }
    }
  }
}
