#include <iostream>

bool isSymmetric(int a[], int n);

int main(int argc, char* argv[]) {
  int a[] = {22, 33, 44, 55, 44, 33, 22};
  std::cout << isSymmetric(a, 7) << std::endl;
  std::cout << isSymmetric(a, 4);
   
  return 0;
}

bool isSymmetric(int a[], int n) {
  for (int i = 0; i < n / 2; ++i) {
    if (a[i] != a[n - 1 - i]) {
      return false;
    }
  }
  return true;
}
