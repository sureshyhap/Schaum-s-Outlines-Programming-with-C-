#include <iostream>

int main() {
  std::cout << "Enter an integer, an operation, and another integer: ";
  int n1 = 0, n2 = 0;
  char op;
  std::cin >> n1 >> op >> n2;
  int result = 0;
  switch (op) {
  case '+':
    result = n1 + n2;
    break;
  case '-':
    result = n1 - n2;
    break;
  case '*':
    result = n1 * n2;
    break;
  case '/':
    result = n1 / n2;
    break;
  case '%':
    result = n1 % n2;
    break;
  }

  std::cout << n1 << " " << op << " " << n2 << " = " << result;
  

  return 0;
}
