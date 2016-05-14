#include<stdlib.h>
#include<stdio.h>
struct node{
 int element;
 struct node *next;
};
typedef struct node node;
node* head,*cur,*newnode;
void insertElement(int element,node* head)
{cur=head;
if(head==0){ head = (node*)malloc(sizeof(node));
 head->element=element;
 head->next=0;
}
else if((head->element)==0) head->element = element;
else { while((cur->next)!=0)cur=cur->next;
newnode=(node*)malloc(sizeof(node));
newnode->next=cur->next;
newnode->element=element;
}
}
int findElement(int element,node* head){int count=0;cur=head;
if(head!=0){
while((cur->next)!=0){
 if((cur->element)==element) return count;else count++;
cur=cur->next;}
}
return 0;
}
