#include <iostream>

unsigned len(const char* s);
char* cat(char* s1, const char* s2);

int main(int argc, char* argv[]) {
  char str1[] = "Abraham Lincoln";
  const char* str2 = "Hello";
  char* new_str = cat(str1, str2);

  int size1 = len(str1), size2 = len(str2);
  std::cout << new_str;
  return 0;
}

unsigned len(const char* s) {
  int i = 0;
  for (; s[i] != '\0'; ++i) {
    ;
  }
  return i * sizeof(char);
}

char* cat(char* s1, const char* s2) {
  unsigned int num_bytes_1 = len(s1);
  unsigned int num_bytes_2 = len(s2);

  char* new_s = new char[num_bytes_1 + num_bytes_2 + 1];

  for (int i = 0; i < num_bytes_1; ++i) {
    new_s[i] = s1[i];
  }
  for (int i = num_bytes_1; i < num_bytes_1 + num_bytes_2; ++i) {
    new_s[i] = s2[i - num_bytes_1];
  }
  new_s[num_bytes_1 + num_bytes_2] = '\0';
  return new_s;
}
