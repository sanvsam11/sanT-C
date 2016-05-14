// c code to invert 2 bits after every third bit

#include<stdio.h>
int main(void){
 int i=0;
 unsigned m=3,input=0;
 printf("Enter the input to perform inversion of two bits after every third bit");
 scanf("%d",&input);
 for(;i<32;i+=2,m<<=4){
  if(i>0)input= m^input;
}
 printf("\n%d\n",input);
 return 0;
}
