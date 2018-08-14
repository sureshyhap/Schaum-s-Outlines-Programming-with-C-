#include <iostream>
#include <cstring>

int num_char_words(char* s, char c);

int main(int argc, char* argv[]) {
  char s[] = "Hellooo how are you?";
  std::cout << num_char_words(s, 'o');
  return 0;
}

// Assuming c != " "
int num_char_words(char* s, char c) {
  int count = 0;
  int len = strlen(s);
  bool considered_word = false;
  for (int i = 0; i < len; ++i) {
    if (s[i] == c && considered_word == false) {
      ++count;
      considered_word = true;
    }
    if (s[i] == ' ') {
      considered_word = false;
    }
  }
  return count;
}
