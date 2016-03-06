// code to create a linked list
#include<stdio.h>
#include<stdlib.h>
struct inode{
int element;
struct inode * next;
};
typedef struct inode nodetype;
nodetype *head,*c,*bc;
void createList(int element){
head=(nodetype*)malloc(sizeof(nodetype)); 
head->element=element;head->next=NULL;
}

void addElement(int element){
 nodetype* newnode;
newnode=(nodetype*)malloc(sizeof(nodetype));
newnode->element=element;
newnode->next=NULL;
c=head;
while(c->next!=NULL)c=c->next;
c->next=newnode;
}

int removeLastElement(){c=head;while(c->next!=0){bc=c;c=c->next;}
int removed_element = c->element;
bc->next=NULL;
return removed_element;
}
void printList(){
c=head;
while(c!=NULL){printf("%d\n",c->element);c=c->next;}
}

int main(){
//printf("Compiled linkedlist successfully\n");

createList(1);
addElement(2);
addElement(3);
printList();
return 0;
}

