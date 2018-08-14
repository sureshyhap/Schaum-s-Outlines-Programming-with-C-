
#include <iostream>

int isSquare(int n);

int main(int argc, char* argv[]) {
  std::cout << "Enter a number to best tested:";
  int a;
  std::cin >> a;
  std::cout << a << " is";
  std::cout << (isSquare(a) == true ? "" : " not");
  std::cout << " a square.";
  
  return 0;
}

// Not the most efficient
int isSquare(int n) {
  for (int i = 1; i <= n; ++i) {
    if (n / i == i) {
      return true;
    }
  }
  return false;

}
