#include <iostream>

void add(float a[], int n, float b[]);

int main(int argc, char* argv[]) {
  float a[] = {2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
  float b[] = {6.0, 5.0, 4.0, 3.0, 2.0, 1.0};
  add(a, 5, b);
  int size_a = sizeof(a) / sizeof(float);
  for (int i = 0; i < size_a; ++i) {
    std::cout << a[i] << " ";
  }


  return 0;
}

void add(float a[], int n, float b[]) {
  for (int i = 0; i < n; ++i) {
    a[i] *= b[i];
  }
  return;
}
