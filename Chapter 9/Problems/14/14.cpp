#include <iostream>
#include <string>

void reverse(std::string& s);

int main(int argc, char* argv[]) {
  std::string s = "ABCDEFG";
  reverse(s);
  std::cout << s;
  
  return 0;
}

void reverse(std::string& s) {
  std::string temp;
  int len = s.length();
  for (int i = 0; i < len; ++i) {
    temp.insert(0, s.substr(i, 1));
  }
  s = temp;
}
