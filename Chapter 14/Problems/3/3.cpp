#include <iostream>
#include <vector>
#include <algorithm>

float median(std::vector<float>& v);

int main(int argc, char* argv[]) {
  std::vector<float> v;
  v.push_back(2);
  v.push_back(12);
  v.push_back(3);
  v.push_back(2);
  v.push_back(4);
  v.push_back(4);
  v.push_back(5);
  v.push_back(1);
  v.push_back(2);

  std::cout << median(v) << std::endl;
  v.pop_back();
  std::cout << median(v) << std::endl;
       
  return 0;
}

float median(std::vector<float>& v) {
  std::sort(v.begin(), v.end());
  if (v.size() % 2 == 0) {
    int left = (v.size() / 2) - 1;
    int right = v.size() / 2;
    float avg = (v[left] + v[right]) / 2;
    return avg;
  }
  else {
    return v[v.size() / 2];
  }
}
