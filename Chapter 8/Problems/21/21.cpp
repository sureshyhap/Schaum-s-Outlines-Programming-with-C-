#include <iostream>
#include <cctype>
#include <cstring>

void capitalize(char* s);

int main(int argc, char* argv[]) {
  char s[100];
  std::cin.getline(s, 100);
  capitalize(s);
  std::cout << s;
  return 0;
}

void capitalize(char* s) {
  int len = strlen(s);
  for (int i = 0; i < len; ++i) {
    s[i] = toupper(s[i]);
  }
}
