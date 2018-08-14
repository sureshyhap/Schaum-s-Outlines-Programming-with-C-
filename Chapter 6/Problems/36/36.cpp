#include <iostream>

int main(int argc, char* argv[]) {
  int a[2][3] = { {1, 5, 7}, {3, 6, 2} };
  int min_rows[2] = {};
  int max_columns[3] = {};

  // Getting the minimax
  
  // Get the maximum of each column
  // Columns
  for (int i = 0; i < 3; ++i) {
    max_columns[i] = a[i][0];
    // Rows
    for (int j = 0; j < 2; ++j) {
      if (a[j][i] > max_columns[i]) {
	max_columns[i]  = a[j][i];
      }
    }
  }

  int minimax = max_columns[0];
  // Get the minimum of the column maxima
  for (int i = 0; i < 3; ++i) {
    if (max_columns[i] < minimax) {
      minimax = max_columns[i];
    }
  }

  std::cout << "Minimax: " << minimax << std::endl;

  // Getting the maximin


  // Get the maximum of each column
  // Rows
  for (int i = 0; i < 2; ++i) {
    min_rows[i] = a[i][0];
    // Columns
    for (int j = 0; j < 3; ++j) {
      if (a[i][j] < min_rows[i]) {
	min_rows[i]  = a[i][j];
      }
    }
  }

  int maximin = min_rows[0];
  // Get the minimum of the column maxima
  for (int i = 0; i < 2; ++i) {
    if (min_rows[i] > maximin) {
      maximin = min_rows[i];
    }
  }

  std::cout << "Maximin: " << maximin << std::endl;

  
  return 0;
}



