//cprogram to test and practice hacks from hackers delight basics section

#include<stdio.h>
int main(void){
 int x;
 printf("Enter the value for x");
 scanf("%d",&x);
 
 printf("%d,%d\n", x&(x-1),x|(x+1));
 return 0;
}
