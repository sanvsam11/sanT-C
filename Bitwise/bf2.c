//program to add two numbers
#include<stdio.h>
int main(){
 int s=0,m,a,b,i=1,c=0,current_bit_sum;
 printf("Enter the two numbers seperated by space:");
 scanf("%d %d", &a,&b);
 while(a|b){
 current_bit_sum=(c^((a&1)^(b&1)));
 printf("\na:%d b:%d sum bit:%d ",current_bit_sum,a&1,b&1);
 s=(current_bit_sum==1)?i|s:i&s; 
 c=c&(a&1)&(b&1);
 printf("Carry Bit:%d",c);
 a>>=a;b>>=b;i<<=1;}
 printf("\nSum:%d\n",s);
}
