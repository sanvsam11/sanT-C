//Program to count the number of set bits in an integer
//Naive attempt

#include<stdio.h>

int main()
{
 int x,c=0;
 printf("Enter the number to count set bits:");
 scanf("%d",&x);
//for(int i=1;i&(c=(i&x)?c:c++);i<<=1)printf("i=%d  c=%d\n",i,c);    //single line attempt
//int i=1;while(i|(c-(c=(x&i)?c:++c))){i>>=1;printf("i=%d c=%d\n",i,c);}
/* using elaborate code */
for(int i=1;i;i<<=1){
 if(!((i&x)==0))c++;
}

 printf("\nThe count is %d\n",c);
}
