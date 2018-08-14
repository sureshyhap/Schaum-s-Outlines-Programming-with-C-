#include <iostream>
#include <cctype>
#include <cstring>

void remove_space(char* s);

int main(int argc, char* argv[]) {
  char s[100];
  std::cin.getline(s, 100);
  remove_space(s);
  return 0;
}

void remove_space(char* s) {
  int len = strlen(s);
  for (int i = 0; i < len; ++i) {
    if (isspace(s[i]) == false) {
      std::cout.put(s[i]);
    }
  }
}
