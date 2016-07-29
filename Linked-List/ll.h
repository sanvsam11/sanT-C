//#include "ll.c"
//struct node;
#ifndef ll_h_
#define ll_h_
struct node {
int element;
 struct node* next;
};
struct node* createList(int);
void addElement(struct node*,int);
void deleteElement(struct node*,int);
void printList(struct node*);
#endif
