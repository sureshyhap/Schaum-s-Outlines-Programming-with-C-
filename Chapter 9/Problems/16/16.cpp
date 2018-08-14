#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
  std::ifstream fin1("Republicans.dat");
  std::ifstream fin2("Democrats.dat");
  std::ofstream out("Presidents.dat");

  std::string s1, s2;
  getline(fin1, s1);
  getline(fin2, s2);

  bool fin1_empty = false, fin2_empty = false;
  while (true) {
    if (s1 < s2) {
      out << s1;
      out << '\n';
      s1.clear();
      getline(fin1, s1);
      if (s1.empty()) {
	fin1_empty = true;
	break;
      }
    }
    else {
      out << s2;
      out << '\n';
      s2.clear();
      getline(fin2, s2);
      if (s2.empty()) {
	fin2_empty = true;
	break;
      }
    }
  }
  while (fin1_empty) {
    s2.clear();
    getline(fin2, s2);
    if (s2.empty()) {
      break;
    }
    out << s2;
    out << '\n';
  }
  while (fin2_empty) {
    s2.clear();
    getline(fin1, s1);
    if (s1.empty()) {
      break;
    }
    out << s1;
    out << '\n';
  }

  return 0;
}
