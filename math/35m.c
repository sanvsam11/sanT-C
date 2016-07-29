#include<stdio.h>
int main(void){
 int i=2,s=0,l=10;
 printf("Limit:");scanf("%d",&l);
 for(i=2;i<l;i++)
  if(i%3==0||i%5==0) s+=i;
printf("\nSuM:%d\n",s);
return 0;
}
