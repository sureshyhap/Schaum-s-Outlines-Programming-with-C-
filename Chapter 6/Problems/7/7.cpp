#include <iostream>

bool isNonincreasing(int a[], int n);

int main(int argc, char* argv[]) {
  int a[] = {22, 44, 66, 88, 44, 66, 55};
  std::cout << "isNonincreasing(a, 4) = " <<isNonincreasing(a, 4) << std::endl;
  std::cout << "isNonincreasing(a, 7) = " <<isNonincreasing(a, 7) << std::endl;
  
  return 0;
}

bool isNonincreasing(int a[], int n) {
  for (int i = 1; i < n; ++i) {
    if (a[i - 1] < a[i]) {
      return false;
    }
  }
  return true;
}
