#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) {
  char names[10][100];
  int i = 0;
  do {
    std::cin.getline(names[i], 100);
  } while (names[i++][0] != '\0');
  --i;

  char* a[i];
  for (int j = 0; j < i; ++j) {
    a[j] = names[j];
  }

  for (int k = 1; k < i; ++k) {
    char* temp = a[k];
    int b = k - 1;
    for (; strcmp(temp, a[b]) < 0 && b >= 0; --b) {
      a[b + 1] = a[b];
    }
    a[b + 1] = temp;
  }

  char names_copy[10][100];
  for (int c = 0; c < i; ++c) {
    strcpy(names_copy[c], a[c]);
  }

  for (int x = 0; x < i; ++x) {
    std::cout << names_copy[x] << std::endl;
  }

  
  return 0;
}
