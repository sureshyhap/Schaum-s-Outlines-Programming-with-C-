#include <iostream>

template<typename T>
int binary_search(const T& element, T array[], int size);

int main(int argc, char* argv[]) {
  int arr[] = {1, 3, 4, 7, 8, 10, 12};
  int size_arr = sizeof(arr) / sizeof(int);
  
  double a[] = {1.2, 3.4, 4.5, 7.6, 8.1, 10.0};
  int size_a = sizeof(a) / sizeof(double);
  
  std::cout << binary_search(12, arr, size_arr) << std::endl;
  std::cout << binary_search(12.0, a, size_a) << std::endl;
  
  return 0;
}

template<typename T>
int binary_search(const T& element, T array[], int size) {
  int low = 0, high = size, middle = (high + low) / 2;
  
  do {
    if (array[middle] == element) {
      return middle;
    }
    else if (array[middle] < element) {
      low = middle + 1;
    }
    else {
      high = middle - 1;
    }
    middle = (high + low) / 2;
  } while (low <= high);

  // Search failed
  return -1;
}
