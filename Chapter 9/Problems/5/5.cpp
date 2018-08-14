#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[]) {
  std::string s;
  std::string new_names[10];
  int j = 0;
  while (std::getline(std::cin, s) && j < 10) {
    int len = s.length();
    int upper_pos[4] = {-1, -1, -1, -1};
    int k = 0;
    for (int i = 0; i < len; ++i) {
      if (s[i] >= 'A' && s[i] <= 'Z') {
	upper_pos[k++] = i;
      }
    }
    // Account for zero indexing
    --k;
    new_names[j] = s.substr(upper_pos[k], len - upper_pos[k]);
    new_names[j] += ", ";
    new_names[j] += s.substr(upper_pos[0], upper_pos[1] - 1);
    new_names[j] += " ";

    if (k + 1 == 3 || k + 1 == 4) {
      new_names[j] += s.substr(upper_pos[1], 1);
      new_names[j] += ". ";
      if (k + 1 == 4) {
	new_names[j] += s.substr(upper_pos[2], 1);
	new_names[j] += ". ";
      }
    }
    ++j;
  }
  std::cout << std::endl;
  for (int i = 0; i < j; ++i) {
    std::cout << new_names[i] << std::endl;
  }

  return 0;
}
