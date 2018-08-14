#include <iostream>

float outerProduct(float p[][3], float a[], float b[]);

int main(int argc, char* argv[]) {
  float p[3][3] = {};
  float a[3] = {2.2, 3.3, 4.4}, b[3] = {2.0, -1.0, 0.0};
  outerProduct(p, a, b);
  
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      std::cout << p[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
  
  return 0;
}

float outerProduct(float p[][3], float a[], float b[]) {
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      p[i][j] = a[i] * b[j];
    }
  }
}
