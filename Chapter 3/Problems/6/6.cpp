#include <iostream>

int main() {
  std::cout << "Please enter your age: ";
  int age;
  std::cin >> age;
  if (age >= 0 && age < 18) {
    std::cout << "You are a child.";
  }
  else if (age >= 18 && age < 65) {
    std::cout << "You are an adult.";
  }
  else if (age >= 65) {
    std::cout << "You are a senior citizen.";
  }
  
  return 0;
}
