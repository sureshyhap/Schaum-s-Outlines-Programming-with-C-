#include <iostream>

int main(int argc, char* argv[]) {
  unsigned int a[] = {22, 44, 66, 88};
  for (int i = 0, size = sizeof(a) / sizeof(unsigned int); i < size; ++i) {
    std::cout << "a[" << i << "] = " << *(a + i);
    std::cout << " and its address is " << a + i << ".\n";
  }

  return 0;
}
