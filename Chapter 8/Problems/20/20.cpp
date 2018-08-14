#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
  char s[] = "###ABCD#EFG##HIJK#L#MN#####O#P#####";
  char* p;
  std::cout << "The string is [" << s << "]\nIts tokens are:\n";
  p = strtok(s, "#");
  while (p) {
    std::cout << "\t[" << p << "]\n";
    p = strtok(NULL, "#");
  }
  std::cout << "Now the string is: [" << s << "]\n";
  
  return 0;
}
