#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
  char s[] = "Today's date is March 12, 2000.";
  char* p[50];
  p[0] = strtok(s, " ");
  int count = 0;
  while (p[count]) {
    ++count;
    p[count] = strtok(NULL, " ");
  }
  for (int i = count - 1; i >= 0; --i) {
    std::cout << p[i] << " ";
  }
  
  return 0;

}
