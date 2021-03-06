#include <iostream>

unsigned len(const char* s);
char* chr(char* s, char c);

int main(int argc, char* argv[]) {
  char s[] = "Hello";
  char c = 'o';
  char* ch = chr(s, c);
  if (ch) {
    std::cout << *ch;
  }
  
  
  return 0;
}

unsigned len(const char* s) {
  int i = 0;
  for (; s[i] != '\0'; ++i) {
    ;
  }
  return i * sizeof(char);
}

char* chr(char* s, char c) {
  int n = len(s);
  for (int i = 0; i < n; ++i) {
    if (s[i] == c) {
      return (s + i);
    }
  }
  return NULL;
}
