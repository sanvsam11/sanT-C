#include<stdio.h>
int main()
{
 int n=2,count=0;
 while(n) (((n>>=1)&1)==1)?count++:count;
 printf("%d\n",count);
 return 0;
}
