//program to reverse the odd bits in an integer
#include<stdio.h>
int main(){
 int n,m=1,i=1;
 printf("Enter the number to toggle odd bits:"); scanf("%d",&n);
 while((i*=2)<=16)
 if((m|(m<<i))<=n) m|=(m<<i);
 else break;
 printf("\n The result is: %d\n",n^m);
 return 0;
}
