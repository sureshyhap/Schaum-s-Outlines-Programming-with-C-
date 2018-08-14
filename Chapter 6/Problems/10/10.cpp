#include <iostream>

void getExtremes(float& min, float& max, float a[], int n);

int main(int argc, char* argv[]) {
  float a[] = {4, 7, 2, 6, 8};
  float minimum, maximum;
  getExtremes(minimum, maximum, a, 5);
  std::cout << "min: " << minimum << std::endl;
  std::cout << "max: " << maximum;
  
  return 0;
}

void getExtremes(float& min, float& max, float a[], int n) {
  min = a[0];
  max = a[0];
  for (int i = 1; i < n; ++i) {
    if (a[i] < min) {
      min = a[i];
    }
    if (a[i] > max) {
      max = a[i];
    }
  }
  return;
}
