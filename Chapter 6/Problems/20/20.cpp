#include <iostream>

void bubble_sort(int a[], int size);

int main(int argc, char* argv[]) {
  int arr[] = {4, 7, 2, 9, 34, 8, 745, 35, 67, 3};
  int size = sizeof(arr) / sizeof(int);

  bubble_sort(arr, size);

  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}

void bubble_sort(int a[], int size) {
  int index[size];
  for (int i = 0; i < size; ++i) {
    index[i] = i;
  }
  for (int i = 1; i < size; ++i) {
    for (int j = 0; j < size - i; ++j) {
      if (a[index[j]] > a[index[j + 1]]) {
	int temp = index[j];
	index[j] = index[j + 1];
	index[j + 1] = temp;
      }
    }
  }
  int b[size];
  for (int i = 0; i < size; ++i) {
    b[i] = a[index[i]];
  }

  for (int i = 0; i < size; ++i) {
    a[i] = b[i];
  }
}
