/* Celina Wong
ECE 361 HW2 Problem 3c:
Rewrite main() to use new ADT. Compile and execute program.
*/

#include "3a.h" //include header
#include<stdio.h>
#include<stdlib.h>

int main() {
  printf("SinglyLinkedList program...\n");
  insertInSinglyLinkedList(&head,5,5);
	insertInSinglyLinkedList(&head,2,5);
	printf("Elements in List:%d\n",singlyListLength(head));
	printSLList(head);
	deleteNodeFromLinkedList(&head,1);
	printSLList(head);
  return 0;
}
