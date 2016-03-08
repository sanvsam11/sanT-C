// code to create a linked list
#include<stdio.h>
#include<stdlib.h>
struct inode{							//node struct definition
int element;
struct inode * next;
};
typedef struct inode nodetype;
nodetype *head,*c,*bc;
void createList(int element){					// create list or create head function
head=(nodetype*)malloc(sizeof(nodetype)); 
head->element=element;head->next=NULL;
}
_Bool checkEmpty(nodetype* h){return (h==NULL)?1:0;}     //check if list is empty function
void addElement(int element){				//insert new element function
 nodetype* newnode;
newnode=(nodetype*)malloc(sizeof(nodetype));
newnode->element=element;
newnode->next=NULL;
c=head;
while(c->next!=NULL)c=c->next;
c->next=newnode;
}
int removeLastElement(){c=head;while(c->next!=0){bc=c;c=c->next;} // delete last element function
int removed_element = c->element;
bc->next=NULL;
return removed_element;
}
void printList(){                    				//printlist function
c=head;
while(c!=NULL){printf("%d\n",c->element);c=c->next;}
}
int main(){
//printf("Compiled linkedlist successfully\n");
createList(1);
addElement(2);
addElement(3);
printList();
printf("trial statment");
return 0;
}

