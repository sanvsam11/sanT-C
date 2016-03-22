//#include "ll.c";
//struct node;
struct node {
 int element;
 struct node* next;
};
struct node* createList(int);
void addElement(struct node*,int);
void deleteElement(struct node*,int);
void printList(struct node*);
