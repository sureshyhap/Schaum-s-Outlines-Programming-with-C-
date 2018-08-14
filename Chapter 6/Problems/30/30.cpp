#include <iostream>

void rotate90(int a[][3], int n);

int main(int argc, char* argv[]) {
  // Magic numbers
  int a[3][3] = { {11, 22, 33}, {44, 55, 66}, {77, 88, 99} };
  rotate90(a, 3);
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
  }

  
  return 0;
}

void rotate90(int a[][3], int n) {
  int b[n][3] = {};
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 3; ++j) {
      b[j][2 - i] = a[i][j];
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 3; ++j) {
      a[i][j] = b[i][j];
    }
  }

}
