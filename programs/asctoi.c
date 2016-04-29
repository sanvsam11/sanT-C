#include<stdio.h>
int asctoi(int a){
 return (char)a;
}
int main(void){
 char a=getc(stdin);
 printf("\n %d \n",asctoi(a));
 return 0;
}
