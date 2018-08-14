#include <iostream>

bool removeFirst(float a[], int& n, float x);

int main(int argc, char* argv[]) {
  float a[] = {2.2, 5.5, 7.7, 6.6, 8.8, 1.1};
  int size = 6;
  removeFirst(a, size, 5.5);
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }

  std::cout << std::endl;
  removeFirst(a, size, 10.0);
  for (int i = 0; i < size; ++i) {
    std::cout << a[i] << " ";
  }

  
  return 0;
}
// DOES n HAVE TO BE SIZE OF WHOLE ARRAY? /////////////////////////
bool removeFirst(float a[], int& n, float x) {
  for (int i = 0; i < n; ++i) {
    // BE CAREFUL TESTING EQUALITY OF FLOATS //////////////////////////
    if (a[i] == x) {
      for (int j = i; j < n - 1; ++j) {
	a[j] = a[j + 1];
      }
      --n;
      return true;
    }
  }
  return false;
}
