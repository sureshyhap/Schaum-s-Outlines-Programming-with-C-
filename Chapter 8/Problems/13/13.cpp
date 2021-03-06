#include <iostream>
#include <cstring>

char* strcat(char* s1, char* s2);

int main(int argc, char* argv[]) {
  char s1[] = "Hello";
  char s2[] = "there";
  std::cout << strcat(s1, s2);
  
  return 0;
}

char* strcat(char* s1, char* s2) {
  int len1 = strlen(s1), len2 = strlen(s2);
  char* s3 = new char[len1 + len2 + 1];
  for (int i = 0; i < len1; ++i) {
    s3[i] = s1[i];
  }
  for (int i = 0; i < len2; ++i) {
    s3[len1 + i] = s2[i];
  }
  s3[len1 + len2] = '\0';
  return s3;
}
