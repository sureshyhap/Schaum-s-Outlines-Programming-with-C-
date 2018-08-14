#include <iostream>

void rotate(int a[], int n, int k);

int main(int argc, char* argv[]) {
  int a[] = {22, 33, 44, 55, 66, 77, 88, 99};
  int size = sizeof(a) / sizeof(int);
  rotate(a, size, -2);
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }
  
  return 0;
}

void rotate(int a[], int n, int k) {
  if (k > 0) {
    for (int i = 0; i < k; ++i) {

      int right_edge = a[n - 1];
      for (int j = n - 1; j > 0; --j) {
	a[j] = a[j - 1];
      }
      a[0] = right_edge;
    }
  }
  else if (k < 0) {
    for (int i = 0; i < -k; ++i) {
      int left_edge = a[0];    
      for (int j = 0; j < n - 1; ++j) {
	a[j] = a[j + 1];
      }
      a[n - 1] = left_edge;
    }
  }
  return;
}
