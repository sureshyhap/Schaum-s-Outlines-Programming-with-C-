#include <iostream>

void append(int a[], int m, int b[], int n);

int main(int argc, char* argv[]) {
  int a[] = {22, 33, 44, 55, 66, 77, 88, 99};
  int b[] = {20, 30, 40, 50, 60, 70, 80, 90};
  append(a, 5, b, 3);
  int a_size = sizeof(a) / sizeof(int);
  for (int i = 0; i < a_size; ++i) {
    std::cout << a[i] << " ";
  }
  
  return 0;
}

// Assumes a[] has space at least m + n
void append(int a[], int m, int b[], int n) {
  for (int j = 0; j < n; ++j) {
    a[m + j] = b[j];
  }
  return;
}
