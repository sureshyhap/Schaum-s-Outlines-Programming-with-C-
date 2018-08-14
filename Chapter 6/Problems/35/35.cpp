#include <iostream>

const int INPUT_SIZE = 4;
const int SIZE = INPUT_SIZE + 1;

void pascal(int x[][SIZE], int n);

int main(int argc, char* argv[]) {
  int x[SIZE][SIZE] = {};
  pascal(x, SIZE);
  for (int i = 0; i < SIZE; ++i) {
    for (int j = 0; j < SIZE; ++j) {
      std::cout << x[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
  return 0;
}

void pascal(int x[][SIZE], int n) {
  for (int i = 0; i <= SIZE; ++i) {
    x[i][0] = 1;
    for (int j = 1; j < i + 1; ++j) {
      x[i][j] = x[i - 1][j] + x[i - 1][j - 1];
    }
  }
}
