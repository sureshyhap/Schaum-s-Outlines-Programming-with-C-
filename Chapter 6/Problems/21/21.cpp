#include <iostream>

int frequency(float a[], int n, float x);

int main(int argc, char* argv[]) {
  float a[] = {22, 55, 77, 88, 44, 22, 55, 22};
  int size = sizeof(a) / sizeof(float);
  std::cout << frequency(a, size, 22);
  
  return 0;
}

int frequency(float a[], int n, float x) {
  int frequency = 0;
  for (int i = 0; i < n; ++i) {
    // BE CAREFUL CHECKING EQUALITY WITH FLOATS
    if (a[i] == x) {
      ++frequency;
    }
  }
  return frequency;
}
