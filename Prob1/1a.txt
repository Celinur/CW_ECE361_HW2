/* Celina Wong
ECE 361 Problem 1a
Write an application in C that reads integers from the console into a 5x5
array and then prints the row sums and the column sums. */

#include <stdio.h>

int main() {
  int array[5][5]; //5x5 array
  int i, j;

  for (i = 0; i < 5; i++) { //create loop to obtain row of numbers
    printf("Enter numbers for row %d: ", i + 1);

    for (j = 0; j < 5; j++) {
      scanf("%d/n", &array[i][j]);
    }
  }

  int rowSum[5]; //array to store sum of rows
  int colSum[5]; //array to store sum of columns

  for (i = 0; i < 5; i++) { //add rows and columns
    rowSum[i] = 0;
    colSum[i] = 0;
    for (j = 0; j <5; j++) {
      rowSum[i] += array[i][j];
      colSum[i] += array[j][i];
    }
  }

  printf("\nRow sum: "); //print sum of rows
  for (i = 0; i < 5; i++) {
    printf("%d ", rowSum[i]);
  }

  printf("\nColumn sum: "); //print sum of columns
  for (i = 0; i < 5; i++) {
    printf("%d ", colSum[i]);
  }

  return 0;
}
