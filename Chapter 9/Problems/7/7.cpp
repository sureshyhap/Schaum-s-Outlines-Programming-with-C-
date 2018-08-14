#include <iostream>
#include <string>
#include <cctype>

void reduce(std::string& s);

int main(int argc, char* argv[]) {
  std::string st = "'Tis,";
  reduce(st);
  std::cout << st;
  
  return 0;
}

void reduce(std::string& s) {
  int i = 0;
  while (!isalpha(s[i])) {
    ++i;
  }
  s = s.substr(i, s.length() - i);
  i = 0;
  while (isalpha(s[i])) {
    if (isupper(s[i])) {
      s[i] = tolower(s[i]);
    }
    ++i;
  }
  s = s.substr(0, i);
}
