#include <iostream>
#include <cstring>

char* strpbrk(char* s1, char* s2);

int main(int rgc, char* argv[]) {
  std::cout << strpbrk("Rutherford", "rstuv");
  
  return 0;
}

char* strpbrk(char* s1, char* s2) {
  int len1 = strlen(s1), len2 = strlen(s2);
  for (int i = 0; i < len1; ++i) {
    for (int j = 0; j < len2; ++j) {
      if (s1[i] == s2[j]) {
	return s1 + i;
      }
    }
  }
}
