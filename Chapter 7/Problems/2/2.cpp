#include <iostream>

int* search(int num, int a[], int size);

int main(int argc, char* argv[]) {
  int arr[] = {11, 22, 33};
  int sz = sizeof(arr) / sizeof(int);
  int* pos = search(11, arr, sz);
  std::cout << pos;
  
  return 0;
}

int* search(int num, int a[], int size) {
  int* p_end = a + size;
  for (int* p = a; p < p_end; ++p) {
    if (*p == num) {
      return p;
    }
  }
  return NULL;
}
