#include<stdio.h>

void swap(char* a,char* b){
 *a = *a ^ *b;
 *b = *a ^ *b;
 *a = *a ^ *b;
}
int main()
{
 char* name;
 int l,a,b;
 printf("Enter the name:");
 scanf("%s",name);
 l=(int)sizeof(name);
 a=0;b=l-1;
 while(a!=b){
  
  swap(&name[a],&name[b]);
  a++;b--;
  if((a+1)==b){
   swap(&name[a],&name[b]);
   break;
}
}
 printf("%s\n",name);
return 0;}
