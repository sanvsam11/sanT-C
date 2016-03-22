#include<stdio.h>
#include<stdlib.h>
#include "ll.h"
/*
struct node{
 int element;
 struct node * next;
};
*/
struct node* createList(int firstElement){
 struct node *head = (struct node*) malloc(sizeof(struct node));
 head->element = firstElement;
 head->next = 0;
 return head;
}
void addElement(struct node *head,int element){
 struct node *newnode = (struct node*) malloc (sizeof(struct node));
 struct node *cursor=head; 
newnode->element = element;
 newnode->next = 0;
 while(cursor->next!=0)cursor = cursor->next;
 cursor->next = newnode;
}
void deleteElement(struct node *head,int element){
 struct node *cursor;
 cursor = head;
 while (cursor->element!=element&&cursor!=0)cursor=cursor->next;
}
void printList(struct node *head){printf("%d->",head->element);
 while((head=head->next)!=0) printf("%d->",head->element);
}
/*
int main(int argc,char* argv[])
{
 struct node *mylist;
 mylist = createList(1);
 addElement(mylist,2);
 addElement(mylist,3);
 addElement(mylist,4);
 deleteElement(mylist,3);
 printList(mylist);
 return 0; 
}
*/
