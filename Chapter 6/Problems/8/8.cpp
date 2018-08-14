#include <iostream>

float min(float a[], int n);

int main(int argc, char* argv[]) {
  float a[] = {5, 3, 7, 9, 8, 5, 2, 1};
  std::cout << min(a, 7) << std::endl;
  std::cout << min(a, 8);
  
  return 0;
}

float min(float a[], int n) {
  // Not considering empty arrays
  float min = a[0];
  for (int i = 1; i < n; ++i) {
    if (a[i] < min) {
      min = a[i];
    }
  }
  return min;
}
