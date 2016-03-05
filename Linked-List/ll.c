// code to create a linked list

#include<stdio.h>
struct inode{
int element;
struct inode * next;
};
struct inode head,c,bc;
void createList(int element){
 head.element=element;head.next=0;
}

void addElement(int element){
 struct inode newelement;
newelement.element=element;
newelement.next=0;
c=head;
while(c.next!=0)c=*c.next;
c.next=&newelement;
}

int removeLastElement(){while(c.next!=0){bc=c;c=*c.next;}
int removed_element = c.element;
bc.next=0;
return removed_element;
}
void printList(){
c=head;
while(c.next!=0){printf("%d",c.element);c=*c.next;}
}
/*
int main(){
printf("Compiled linkedlist successfully\n");
return 0;
}
*/
