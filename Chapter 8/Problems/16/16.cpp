#include <iostream>
#include <cstring>

int strspn(char* s1, char* s2);

int main(int argc, char* argv[]) {
  char s1[] = "baccalaureate";
  char s2[] = "abc";
  std::cout << strspn(s1, s2);
  
  return 0;
}

int strspn(char* s1, char* s2) {
  int len1 = strlen(s1), len2 = strlen(s2);
  for (int i = 0; i < len1; ++i) {
    bool match = false;
    for (int j = 0; j < len2; ++j) {
      if (s1[i] == s2[j]) {
	match = true;
	break;
      }
    }
    if (match == false) {
      return i;
    }
  }
}
