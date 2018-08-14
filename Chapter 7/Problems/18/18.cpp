#include <iostream>

int main(int argc, char* argv[]) {
  int a[] = {11, 22, 33, 44, 55, 66, 77, 88};
  int size_a = sizeof(a) / sizeof(int);
  int* (*p_a) = new int*[size_a];
  for (int i = 0; i < size_a; ++i) {
    *p_a[i] = a[i];
  }
  int* (*p_a2) = new int*[size_a];
  for (int i = 0; i < size_a; ++i) {
    if (i % 2 == 0) {
      p_a2[i] = p_a[i / 2];
    }
    else {
      p_a2[i] = p_a[(i + 1) / 2 + 3];
    }
  }
  for (int i = 0; i < size_a; ++i) {
    std::cout << *p_a2[i] << " ";
  }
  
  return 0;
}
