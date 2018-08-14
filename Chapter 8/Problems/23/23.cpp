#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
  char s[] = "Today's date is March 12, 2000.";
  char* p;
  p = strtok(s, " ");
  int count = 0;
  while (p) {
    ++count;
    p = strtok(NULL, " ");
  }
  std::cout << count;
  return 0;
}
