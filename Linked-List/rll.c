#include<stdio.h>
#include "ll.h"

struct node* reverseList(struct node* head){
 if(head==0) return 0;
 struct node* a,*b;
 a=head->next;b=a->next;head->next=0;
 while(a->next!=0){
 a->next = head;
 head = a;
 a = b;
 b = b->next;
}
return head;
}
int main(int argc,char* argv[])
{
 struct node *list;
 list = createList(5);
 addElement(list,4);
 addElement(list,3);
 addElement(list,2);
 addElement(list,1);
 list = reverseList(list);
 printList(list);
 return 0;
}
