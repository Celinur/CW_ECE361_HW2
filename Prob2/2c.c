/* Celina Wong
ECE361 Problem 2c:
Compile and execute source code for maximum() function and test_maximum.c
program. Include source code and console transcript.
*/

//test_maximum.c code

#include <stdio.h>
#include <stdlib.h>

// function prototypes
float maximum(float list[], int n);

int main() {
	float vector[32];	// array holding the list elements
	int numItems;		// number of items
	int i;		        // loop index


	printf("Find the maximum number in an array of numbers\n\n");

	printf("Enter the number of items in the list: ");
	scanf("%d", &numItems);
	printf("Enter the items as a floating point number: ");
	for (i = 0; i < numItems; i++) {
		scanf("%f", &vector[i]);
	}
	printf("Original list: ");
	for (i = 0; i < numItems; i++) {
		printf("%4.2f ", vector[i]);
	}
	printf("\n");
	printf("Largest value: %4.2f\n", maximum(vector, numItems - 1));
	return 0;
}

//functions that recursively finds largest number

float max(float a, float b) {
  return a > b ? a : b; //if a is greater than b then a = b
}

float maximum(float list[], int n) {
  if (n == 0) {
    return list[n];
  }
  return max(list[n], maximum(list, n-1)); //function to compare elements
}
