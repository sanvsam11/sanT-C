#include<stdio.h>
int main(void){
 int inp,count=0;
 printf("Enter the number:");
 scanf("%d",&inp);
 while(inp){
  count++;
  inp&=(inp-1);
}
 printf("\n%d\n",count);
return 0;
}
