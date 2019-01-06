#include <iostream>
#include <vector>
#include <algorithm>

// For some reason const& is not working
int frequency(std::vector<int>& v, int x);

int main(int argc, char* argv[]) {
  std::vector<int> v;
  v.push_back(2);
  v.push_back(12);
  v.push_back(3);
  v.push_back(2);
  v.push_back(2);
  std::cout << frequency(v, 2);

  return 0;
}

int frequency(std::vector<int>& v, int x) {
  int count = 0;
  std::vector<int>::iterator it = v.begin();

  while (true) {
    it = std::find(it, v.end(), x);
    if (it == v.end()) {
      break;
    }
    ++count;
    ++it;
  }
  return count;
}
