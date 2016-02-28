#include<stdio.h>
/*  Code to swap two numbers without temp
int main()
{
 int a=1,b=2;
 a=a^b;
 b=a^b;
 a=a^b;
 printf("%d,%d",a,b);
 return 0;
} 
*/

int bitCounter(int a){
int x=1,count=0;
for(int i=0;i<32;i++,x<<1)
 count=(!(a^x))?count+1:count;
return count;}
int main()
{
printf("Enter the number to find set bit count:");
int a;scanf("%d",&a);
printf("\n The count of set bits is:%d\n",bitCounter(a));
return 0;
}
