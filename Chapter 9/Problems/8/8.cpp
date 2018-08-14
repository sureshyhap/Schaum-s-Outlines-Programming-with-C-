#include <iostream>
#include <string>
#include <cctype>
#include <istream>
#include <fstream>

bool reduce(std::string& s);

int main(int argc, char* argv[]) {
  std::string s;
  std::string words[1000];
  int words_freq[1000];
  int num_new_words = 0;
  int total_words = 0;
  int lines = 0;
  std::ofstream file("in.txt");
  std::ifstream file2("in.txt");
  while (getline(std::cin, s)) {
    ++lines;
    file << s;
    file << '\n';
  }
  file.seekp(0, std::ios_base::beg);
  s.clear();
  while (file2 >> s) {
    if (!isalpha(s[0])) {
      if (!reduce(s)) {
	continue;
      }
    }
    ++total_words;
    reduce(s);
   
    bool is_in_array = false;
    int i = 0;
    for (; words[i].length() != 0; ++i) {
      if (s == words[i]) {
	is_in_array = true;
	++words_freq[i];
	break;
      }
    }
    if (!is_in_array) {
      words[i] = s;
      ++words_freq[i];
      ++num_new_words;
    }
  }
  
  std::cout << "\nThe input had " << lines <<
    (lines == 1 ? " line" : " lines") << " and " <<
    total_words << (total_words == 1 ? " word" : " words") <<
    ", with the following frequencies:\n";

  for (int i = 0; i < num_new_words; ++i) {
    std::cout << words[i] << ": " << words_freq[i] << "\n";
  }
  
  return 0;
}

bool reduce(std::string& s) {
  int i = 0;
  int len = s.length();
  while (!isalpha(s[i])) {
    ++i;
    if (i == len) {
      return false;
    }
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
