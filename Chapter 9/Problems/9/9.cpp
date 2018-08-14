#include <iostream>
#include <string>

const int CHAR_PER_LINE = 60;

int main(int argc, char* argv[]) {
  std::string lines[10];
  std::string s;
  int k = 0;
  while (std::getline(std::cin, s)) {
    int num_spaces = CHAR_PER_LINE - s.length();
    for (int i = 0; i < num_spaces; ++i) {
      lines[k] += ' ';
    }
    lines[k++] += s;
  }
  int j = 0;
  while (!lines[j].empty()) {
    std::cout << lines[j++] << '\n';
  }

  return 0;
}
