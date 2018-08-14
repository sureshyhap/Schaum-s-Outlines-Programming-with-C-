#include <iostream>
#include <cstring>

int char_count(char* s, char c);

int main(int argc, char* argv[]) {
  char* s1 = "Misissippi";
  std::cout << char_count(s1, 's');
  
  return 0;
}

int char_count(char* s, char c) {
  int len = strlen(s);
  int count = 0;
  for (int i = 0; i < len; ++i) {
    if (s[i] == c) {
      ++count;
    }
  }
  return count;
}
