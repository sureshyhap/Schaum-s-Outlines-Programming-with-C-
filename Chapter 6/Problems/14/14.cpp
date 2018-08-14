#include <iostream>

void removeAll(float a[], int& n, float x);

int main(int argc, char* argv[]) {
  float a[] = {22, 55, 77, 66, 22, 44, 55, 22};
  int size = sizeof(a) / sizeof(float);
  removeAll(a, size, 22);
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }
  
  return 0;
}

void removeAll(float a[], int& n, float x) {
  for (int i = 0; i < n; ++i) {
    // CAREFUL CHECKING EQUAILTY OF FLOATS
    if (a[i] == x) {
      for (int j = i; j < n - 1; ++j) {
	a[j] = a[j + 1];
      }
      --n;
    }
  }
}
