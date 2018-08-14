#include <iostream>

void reverse(int a[], int n);

int main(int argc, char* argv[]) {
  int a[] = {22, 33, 44, 55, 66, 77, 88, 99};
  reverse(a, 5);
  int size = sizeof(a) / sizeof(int);
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }
  
  return 0;
}

void reverse(int a[], int n) {
  int b[n];
  for (int i = n - 1; i >= 0; --i) {
    b[n - 1 - i] = a[i];
  }
  for (int i = 0; i < n; ++i) {
    a[i] = b[i];
  }
}
