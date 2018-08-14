#include <iostream>

int main() {
  int score;
  std::cout << "Enter your test score: ";
  std::cin >> score;
  switch (score / 10) {
  case 10:
    if (score % 10 != 0) {
      std::cout << "Error: score is out of range.";
      break;
    }
  case 9:
    std::cout << "Your grade is an A." << std::endl;
    break;
  case 8:
    std::cout << "Your grade is a B." << std::endl;
    break;
  case 7:
    std::cout << "Your grade is a C." << std::endl;
    break;
  case 6:
    std::cout << "Your grade is a D." << std::endl;
    break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    if (score > -10 && score < 0) {
      std::cout << "Error: score is out of range.";
      break;      
    }
    std::cout << "Your grade is a F." << std::endl;
    break;
  default:
    std::cout << "Error: score is out of range.";
    break;
  }
  
  return 0;
}
