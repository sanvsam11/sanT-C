//program to create and reverse a linked list
#include "ll.h"
#include<stdio.h>
int main()
{
int *p;
p=(int*)createList(1);
addElement(2);
addElement(3);
reverseList(p);
printList();
return 0;}
