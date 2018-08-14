#include <iostream>
#include <string>

int HinduArabic(std::string s);

int main(int rgc, char* argv[]) {
  std::cout << HinduArabic("MDCCCXII");
  
  return 0;
}

int HinduArabic(std::string s) {
  int len = s.length();
  int sum = 0;
  for (int i = 0; i < len; ++i) {
    switch (s[i]) {
    case 'M':
      sum += 1000;
      break;
    case 'D':
      sum += 500;
      break;
    case 'C':
      sum += 100;
      break;
    case 'L':
      sum += 50;
      break;
    case 'X':
      sum += 10;
      break;
    case 'V':
      sum += 5;
      break;
    case 'I':
      sum += 1;
      break;
    }
  }
  return sum;
}
