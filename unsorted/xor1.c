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
//wrong operator
int bitCounter(int a){
int x=1,count=0;
for(;x>0;x=x<<1)
// printf("\nx:%d",x);
 count=(a&x)?count+1:count;
return count;}
int main()
{
printf("Enter the number to find set bit count:");
int a;scanf("%d",&a);
printf("\n The count of set bits is:%d\n",bitCounter(a));
//int x=1;x=x<<1;
//printf("\n Left shifted 1 is:%d\n a&x is:%d\n after leftshift again:%d",a,a&x,(x<<1)&a);
return 0;
}
