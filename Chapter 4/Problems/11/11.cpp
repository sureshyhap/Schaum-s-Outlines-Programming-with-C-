#include <iostream>

int pow_10(int exp);

int main() {
  unsigned int num = 0;
  // This program will only work for the range of unsigned integers
  std::cout << "Enter a positive integer to have its digits reversed: ";
  std::cin >> num;

  int digits = 0;
  const int HIGHEST_POW_10_FOR_U_INT = 10;

  // Find the number of digits
  for (int power_of_10 = HIGHEST_POW_10_FOR_U_INT; power_of_10 > 0; --power_of_10) {
    if (num % pow_10(HIGHEST_POW_10_FOR_U_INT - 1) != num) {
      digits = HIGHEST_POW_10_FOR_U_INT;
      break;
    }
    if ((num % pow_10(power_of_10) == num) && (num % pow_10(power_of_10 - 1) != num)) {
      digits = power_of_10;
      break;
    }
  }

  int extracted_digits_reversed[digits];
  for (int i = 0; i < digits; ++i) {
    extracted_digits_reversed[i] = (num % pow_10(i + 1)) / pow_10(i);
  }

  std::cout << "The reversed number is: ";
  for (int i = 0; i < digits; ++i) {
    std::cout << extracted_digits_reversed[i];
  }
  std::cout << "." << std::endl;
  
  return 0;
}

int pow_10(int exp) {
  int prod = 1;
  for (int i = 0; i < exp; ++i) {
    prod *= 10;
  }
  return prod;
}
