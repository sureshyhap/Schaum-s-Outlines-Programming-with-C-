#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
  char st[] = "Hello!";
  int len = strlen(st);
  for (int i = 0; i < len / 2; ++i) {
    char c = st[i];
    st[i] = st[len - 1 - i];
    st[len - 1 - i] = c;
  }

  std::cout << st;
  
  return 0;
}
