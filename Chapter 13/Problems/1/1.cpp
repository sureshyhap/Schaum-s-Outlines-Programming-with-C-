#include <iostream>

template<typename T>
T& find_max(T& first, T& second);

int main(int argc, char* argv[]) {
  int m = 5, n = 3;
  double md = 2.7182818284, nd = 3.14159;
  std::cout << find_max(m, n) << std::endl;
  std::cout << find_max(md, nd) << std::endl;
  
  return 0;
}

template<typename T>
T& find_max(T& first, T& second) {
  return (first > second ? first : second);
}
