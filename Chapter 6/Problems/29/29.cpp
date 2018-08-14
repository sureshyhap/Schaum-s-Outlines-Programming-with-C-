#include <iostream>

int main(int argc, char* argv[]) {
  int a[] = {11, 22, 33, 44, 55, 66, 77, 88};
  int size_a = sizeof(a) / sizeof(int);
  // size_a is even
  int size_small = size_a / 2;
  int first[size_small];
  int second[size_small];
  for (int i = 0; i < size_small; ++i) {
    first[i] = a[i];
  }
  for (int i = size_small, j = 0; i < size_a; ++i, ++j) {
    second[j] = a[i];
  }
  for (int i = 0; i < size_small; ++i) {
    a[i * 2] = first[i];
    a[i * 2 + 1] = second[i];
  }
  
  for (int i = 0; i < size_a; ++i) {
    std::cout << a[i] << " ";
  }
  
  return 0;
}
