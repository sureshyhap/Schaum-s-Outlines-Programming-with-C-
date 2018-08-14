#include <iostream>

// Finds largest and 2nd largest numbers in array
void largest(float& max1, float& max2, float a[], int n);

int main(int argc, char* argv[]) {
  float a[] = {22, 55, 33, 77, 55, 88};
  float max1, max2;
  largest(max1, max2, a, 6);
  std::cout << max1 << " " << max2;
  
  return 0;
}

void largest(float& max1, float& max2, float a[], int n) {
  // Not considering negative values
  max1 = 0, max2 = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    }
  }
  return;
}
