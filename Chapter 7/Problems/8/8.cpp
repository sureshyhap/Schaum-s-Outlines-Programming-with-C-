#include <iostream>

unsigned len(const char* s);

int main(int argc, char* argv[]) {
  const char* str = "Hello";
  std::cout << len(str);
  
  return 0;
}

unsigned len(const char* s) {
  int i = 0;
  for (; s[i] != '\0'; ++i) {
    ;
  }
  return i * sizeof(char);
}
