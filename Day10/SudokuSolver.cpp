#include <bits/stdc++.h>

bool isafe(int row, int col, int matrix[9][9], int num) {

  for (int i = 0; i < 9; i++) {

    if (matrix[i][col] == num)
      return false;
  }
  for (int j = 0; j < 9; j++) {

    if (matrix[row][j] == num)
      return false;
  }

  int rowstart = row - row % 3;

  int colstart = col - col % 3;

  for (int i = rowstart; i < rowstart + 3; i++) {

    for (int j = colstart; j < colstart + 3; j++) {

      if (matrix[i][j] == num)
        return false;
    }
  }

  return true;
}

bool solve(int a[9][9]) {
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (!a[i][j]) {
        for (int k = 1; k <= 9; k++) {
          if (isafe(i, j, a, k)) {
            a[i][j] = k;
            if (solve(a))
              return true;
            a[i][j] = 0;
          }
        }
        return false;
      }
    }
  }
  return true;
}

bool isItSudoku(int a[9][9]){

    return solve(a);

}
