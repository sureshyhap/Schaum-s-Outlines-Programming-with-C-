#include <iostream>
#include <cstring>

char* Strstr(char* s1, char* s2);

int main(int argc, char* argv[]) {
  char s1[] = "Hello there";
  char s2[] = "the";

  char* result = Strstr(s1, s2);
  if (result) {
    std::cout << result - s1;
  }
  
  return 0;
}

char* Strstr(char* s1, char* s2) {
  int i = 0, len1 = strlen(s1), len2 = strlen(s2);
  for (int i = 0; i < len1; ++i) {
    if (s1[i] == s2[0]) {
      int k = 1;
      for (; k < len2 && i + k < len1; ++k) {
	if (s1[i + k] != s2[k]) {
	  break;
	}
      }
      if (k == len2) {
	return s1 + i;
      }
    }
  }
  return NULL;
}
