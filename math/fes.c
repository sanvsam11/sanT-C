// c program to print sum of even fibonacci terms before limit

#include<stdio.h>
int main(void){
 long long int a=1,b=1,c=2,s=0,l=0;
 printf("Enter the limit:");scanf("%lld",&l);
 while(c<l){
  s+=c;
  a=c+b;
  b=c+a;
  c=a+b;
}
printf("%lld\n",s);
return 0;
}
