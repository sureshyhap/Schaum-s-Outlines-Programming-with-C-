#include <iostream>

unsigned len(const char* s);
int cmp(char* s1, char* s2);

int main(int argc, char* argv[]) {
  char s1[] = "Hello World";
  char s2[] = "Hello";
  std::cout << cmp(s1, s2);
  
  return 0;
}

unsigned len(const char* s) {
  int i = 0;
  for (; s[i] != '\0'; ++i) {
    ;
  }
  return i * sizeof(char);
}

int cmp(char* s1, char* s2) {
  int n = len(s2);

  for (int i = 0; i < n; ++i) {
    if (s1[i] < s2[i]) {
      return -1;
    }
    else if (s1[i] > s2[i]) {
      return 1;
    }
  }
  return 0;
}
