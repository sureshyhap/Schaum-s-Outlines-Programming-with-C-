#include <iostream>

int main(int argc, char* argv[]) {
  char word[80];
  while (std::cin >> word) {
    if (*word) {
      std::cout << "\t\"" << word << "\"\n";
    }
  }
  
  return 0;
}
