#include <iostream>
#include <string>

int decimal(std::string s);

int main(int argc, char* argv[]) {
  std::cout << decimal("2d7b");
  
  return 0;
}

int decimal(std::string s) {
  int len = s.length();
  int sum = 0;
  for (int i = len - 1, j = 0; i >= 0; --i, ++j) {
    int digit;
    switch (s[i]) {
    case '0':
      digit = 0;
      break;
    case '1':
      digit = 1;
      break;
    case '2':
      digit = 2;
      break;
    case '3':
      digit = 3;
      break;
    case '4':
      digit = 4;
      break;
    case '5':
      digit = 5;
      break;
    case '6':
      digit = 6;
      break;
    case '7':
      digit = 7;
      break;
    case '8':
      digit = 8;
      break;
    case '9':
      digit = 9;
      break;
    case 'a':
      digit = 10;
      break;
    case 'b':
      digit = 11;
      break;
    case 'c':
      digit = 12;
      break;
    case 'd':
      digit = 13;
      break;
    case 'e':
      digit = 14;
      break;
    case 'f':
      digit = 15;
      break;
    }
    for (int k = 0; k < j; ++k) {
      digit *= 16;
    }
    sum += digit;
  }
  return sum;
}
