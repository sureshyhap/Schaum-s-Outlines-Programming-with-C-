#include <iostream>
#include <string>
#include <cctype>

const int SIZE_ALPHABET = 26;

int main(int argc, char* argv[]) {
  std::string s;
  int lines = 0;
  int words = 0;
  int letter_freq[SIZE_ALPHABET] = {};
  while (std::getline(std::cin, s)) {
    int len = s.length();
    ++lines;
    for (int i = 0; i < len; ++i) {
      // Number of words = number of spaces + 1
      if (isspace(s[i])) {
	++words;
      }
      switch (s[i]) {
      case 'A':
      case 'a':
	++letter_freq[0];
	break;
      case 'B':
      case 'b':
	++letter_freq[1];
	break;
      case 'C':
      case 'c':
	++letter_freq[2];
	break;
      case 'D':
      case 'd':
	++letter_freq[3];
	break;
      case 'E':
      case 'e':
	++letter_freq[4];
	break;
      case 'F':
      case 'f':
	++letter_freq[5];
	break;
      case 'G':
      case 'g':
	++letter_freq[6];
	break;
      case 'H':
      case 'h':
	++letter_freq[7];
	break;
      case 'I':
      case 'i':
	++letter_freq[8];
	break;
      case 'J':
      case 'j':
	++letter_freq[9];
	break;
      case 'K':
      case 'k':
	++letter_freq[10];
	break;
      case 'L':
      case 'l':
	++letter_freq[11];
	break;
      case 'M':
      case 'm':
	++letter_freq[12];
	break;
      case 'N':
      case 'n':
	++letter_freq[13];
	break;
      case 'O':
      case 'o':
	++letter_freq[14];
	break;
      case 'P':
      case 'p':
	++letter_freq[15];
	break;
      case 'Q':
      case 'q':
	++letter_freq[16];
	break;
      case 'R':
      case 'r':
	++letter_freq[17];
	break;
      case 'S':
      case 's':
	++letter_freq[18];
	break;
      case 'T':
      case 't':
	++letter_freq[19];
	break;
      case 'U':
      case 'u':
	++letter_freq[20];
	break;
      case 'V':
      case 'v':
	++letter_freq[21];
	break;
      case 'W':
      case 'w':
	++letter_freq[22];
	break;
      case 'X':
      case 'x':
	++letter_freq[23];
	break;
      case 'Y':
      case 'y':
	++letter_freq[24];
	break;
      case 'Z':
      case 'z':
	++letter_freq[25];
	break;
      default:
	break;
      }
    }
    ++words;
  }
  std::cout << "The input has " << lines << " lines, " << words << " words," <<
    " the following letter frequencies:\n";
  for (int i = 0; i < SIZE_ALPHABET; ++i) {
    std::cout << "\t" << char('A' + i) << ": " << letter_freq[i] << std::endl;
  }
  return 0;
}
