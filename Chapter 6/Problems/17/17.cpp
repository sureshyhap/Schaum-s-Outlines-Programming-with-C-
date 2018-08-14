#include <iostream>

void insert(float a[], int& n, float x);

int main(int argc, char* argv[]) {
  float a[9] = {22, 33, 44, 55, 66, 77, 88, 99};
  int size = 8;
  insert(a, size, 50);
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }
  
  return 0;
}

// Assumes a is sorted
void insert(float a[], int& n, float x) {
  ++n;
  for (int i = 0; i < n; ++i) {
    if (x >= a[i] && x <= a[i + 1]) {
      // Assumes array has size n + 1 at least
      for (int j = n - 1; j > i; --j) {
	a[j + 1] = a[j];
      }
      a[i + 1] = x;
      break;
    }
  }
  return;
}
