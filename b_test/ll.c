//#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
struct node{
 int element;
 struct node * next;
};
typedef struct node node;
node *cur,*newnode;
node* createList(int element){
node* head = (node*)malloc(sizeof(node));
head->element=element;
head->next = 0;
return head;
}
void insertElement(int element,node* head)
{cur=head;
while((cur->next)!=0)cur=cur->next;
newnode=(node*)malloc(sizeof(node));
cur->next=newnode;
newnode->next=0;
newnode->element=element;

}
int findElement(int element,node* head){int count=0;cur=head;
while((cur->next)!=0){
 if((cur->element)==element) return count;else count++;
cur=cur->next;}
return 0;
}

int main(){
 node *list;
int pos=0; 
list=createList(1);
 insertElement(2,list);
 insertElement(3,list);
 insertElement(4,list);
 if((pos=findElement(3,list))==0) printf("3 not found");
 else printf("3 found at position:%d",pos);
 return 0;
}
