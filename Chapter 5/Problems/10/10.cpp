#include <iostream>

// Only works with non-zero values!
float average(float x1, float x2 = 0, float x3 = 0, float x4 = 0);

int main(int argc, char* argv[]) {
  int nums[4] = {0, 0, 0, 0};
  std::cout << "Enter up to 4 numbers to be averaged: " << '\n';
  int i = 0;
  do {
    std::cin >> nums[i];
  } while (i < (4 - 1) && nums[i++] != 0);
  float avg;
  if (nums[0] == 0) {
    avg = 0;
  }
  else if (nums[1] == 0) {
    avg = nums[0];
  }
  else if (nums[2] == 0) {
    avg = average(nums[0], nums[1]);
  }
  else if (nums[3] == 0) {
    avg = average(nums[0], nums[1], nums[2]);
  }
  else {
    avg = average(nums[0], nums[1], nums[2], nums[3]);
  }

  std::cout << "The average is " << avg << '.';
  
  return 0;
}

float average(float x1, float x2, float x3, float x4) {
  if (x2 == 0) {
    return x1;
  }
  if (x3 == 0) {
    return (x1 + x2) / 2;
  }
  if (x4 == 0) {
    return (x1 + x2 + x3) / 3;
  }
    return (x1 + x2 + x3 + x4) / 4;

}
