#include <iostream>

void strcpy(char* s1, const char* s2);

int main(int argc, char* argv[]) {
  char s1[] = "Howdy";
  char s2[] = "Bye";
  strcpy(s1, s2);
  std::cout << s1;
  
  return 0;
}

void strcpy(char* s1, const char* s2) {
  int i = 0;
  for (; s2[i] != '\0'; ++i) {
    ;
  }
  // Including the NUL character
  int s_len = i + 1;

  for (int j = 0; j < s_len; ++j) {
    s1[j] = s2[j];
  }
}
