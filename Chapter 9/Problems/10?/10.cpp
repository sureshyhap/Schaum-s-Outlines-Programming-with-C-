#include <iostream>
#include <string>

std::string Roman(int n);

int main(int argc, char* argv[]) {
  std::cout << Roman(1945);
  return 0;
}

std::string Roman(int n) {
  enum {
	M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1
  };
  int a = n;
  // Number of each numeral starting with M and ending with I
  int num_each[7];
  
  num_each[0] = a / M;
  a -= (num_each[0] * M);

  num_each[1] = a / D;
  a -= (num_each[1] * D);

  num_each[2] = a / C;
  a -= (num_each[2] * C);
  
  num_each[3] = a / L;
  a -= (num_each[3] * L);

  num_each[4] = a / X;
  a -= (num_each[4] * X);

  num_each[5] = a / V;
  a -= (num_each[5] * V);

  num_each[6] = a / I;
  a -= (num_each[6] * I);

  std::string s;
  for (int j = 0; j < 7; ++j) {
    for (int i = 0; i < num_each[j]; ++i) {
      switch (j) {
      case 0:
	s += 'M';
	break;
      case 1:
	s += 'D';
	break;
      case 2:
	s += 'C';
	break;
      case 3:
	s += 'L';
	break;
      case 4:
	s += 'X';
	break;
      case 5:
	s += 'V';
	break;
      case 6:
	s += 'I';
	break;
      }
    }
  }
  return s;
}
