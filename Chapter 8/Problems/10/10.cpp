#include <iostream>
#include <cstring>

char* strrchr(char* s, char c);

int main(int argc, char* argv[]) {
  char s1[] = "Hello";
  std::cout << strrchr(s1, 'l') - s1;

  return 0;
}

char* strrchr(char* s, char c) {
  int len = strlen(s);
  int i = len - 1;
  for (; s[i] != c; --i) {
    if (i < 0) {
      return NULL;
    }
  }
  return s + i;
}
