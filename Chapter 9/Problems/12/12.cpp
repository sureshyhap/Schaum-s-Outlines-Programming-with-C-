#include <iostream>
#include <string>

std::string hexadecimal(int n);

int main(int argc, char* argv[]) {
  std::cout << hexadecimal(11643);
  
  return 0;
}

std::string hexadecimal(int n) {
  std::string c;
  std::string s;
  while (n != 0) {
    switch (n % 16) {
      
    case 0:
      c = "0";
      break;
    case 1:
      c = "1";
      break;
    case 2:
      c = "2";
      break;
    case 3:
      c = "3";
      break;
    case 4:
      c = "4";
      break;
    case 5:
      c = "5";
      break;
    case 6:
      c = "6";
      break;
    case 7:
      c = "7";
      break;
    case 8:
      c = "8";
      break;
    case 9:
      c = "9";
      break;      
    case 10:
      c = "a";
      break;
    case 11:
      c = "b";
      break;
    case 12:
      c = "c";
      break;
    case 13:
      c = "d";
      break;
    case 14:
      c = "e";
      break;
    case 15:
      c = "f";
      break;
    }
    s.insert(0, c);
    n /= 16;
  }
  return s;
}
