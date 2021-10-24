/* Celina Wong
ECE 361 Prob 2b:
Write a C function: float maximum(float list[], int n); that recursively
finds the largest floating point number between list[0] and list[n-1].
Assume at least one element is in the list. n is the number of floating
point numbers in the list[] array. */

#include <stdio.h>
#include <stdlib.h>

float max(float a, float b) {
  return a > b ? a : b; //if a is greater than b then a = b
}

float maximum(float list[], int n) {
  if (n == 0) {
    return list[n];
  }
  return max(list[n], maximum(list, n-1));
}
