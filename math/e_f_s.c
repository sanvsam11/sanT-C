// c program to sum the even numbers in fibonacci series until 4 million
#include<stdio.h>
int main(void){
 long long int limit,a=-1,b=1,f=0,s=0;
 //printf("Enter the limit:");scanf("%lld",&limit);
for(long long int i=0;i<4000000;i++){
 f=a+b;//printf("\n%lld ",f);
 if(f%2==0) s+=f; if(s>4000000) break;
 a=b;
 b=f;
} 
printf("\nAnswer:%lld\n",s);
return 0;
}
