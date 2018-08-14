#include <iostream>

int main(int argc, char* argv[]) {
  const int SIZE = 50;
  bool isPrime[SIZE] = {};
  
  for (int i = 0; i < SIZE; ++i) {
    isPrime[i] = true;
  }

  isPrime[0] = false;
  isPrime[1] = false;
  isPrime[3] = true;

  for (int j = 4, k = 2; k <= SIZE / 2; j += 2, ++k) {
    for (int i = j; i < SIZE; ++i) {
      if (i % k == 0) {
	isPrime[i] = false;
      }
    }
  }

  for (int i = 0; i < SIZE; ++i) {
    std::cout << i << "->" << isPrime[i] << std::endl;
  }
  
  return 0;
}
