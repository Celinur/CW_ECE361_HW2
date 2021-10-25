/* Celina Wong
ECE361 HW2 Problem 3a:
Header (.h) file for linked list ADT.
*/

#ifndef 3A_H
#define 3A_H

//function declarations

int singlyListLength(struct listNode *head);
void insertInSinglyLinkedList(struct listNode **head, int data, int pos);
void deleteNodeFromLinkedList(struct listNode **head, int pos);
void printSLList(struct listNode *head);
int SinglyLinkedList_test();
int main();

#endif
