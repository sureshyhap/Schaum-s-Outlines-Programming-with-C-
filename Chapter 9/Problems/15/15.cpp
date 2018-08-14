#include <iostream>
#include <string>

void reverse(std::string& s);
bool is_palindrome(std::string s);

int main(int argc, char* argv[]) {
  std::cout << is_palindrome("RADAR") << std::endl;
  std::cout << is_palindrome("ABCD");
  
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

bool is_palindrome(std::string s) {
  std::string s2 = s;
  reverse(s2);
  if (s == s2) {
    return true;
  }
  else {
    return false;
  }
}
