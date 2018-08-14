#include <iostream>

float ave(int a[], int n);

int main(int argc, char* argv[]) {
  int a[] = {11, 33, 55, 78};
  std::cout << "Average is: " << ave(a, 4); 
  
  return 0;
}

float ave(int a[], int n) {
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += a[i];
  }
  return float(sum) / n;
}
