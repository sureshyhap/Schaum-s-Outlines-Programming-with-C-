#include <iostream>

double* copy(double arr[], int size);

int main(int argc, char* argv[]) {
  double a[] = {22.0, 55.0, 44.0};
  int sz = sizeof(a) / sizeof(double);
  double* a2 = copy(a, sz);
  for (int i = 0; i < sz; ++i) {
    std::cout << a2[i] << " ";
  }
  return 0;
}

double* copy(double arr[], int size) {
  double* p = new double[size];

  for (int i = 0; i < size; ++i) {
    p[i] = *(arr + i);
  }
  return p;
}
