// c program to obtain the following bit pattern 
// 01101110110111

#include<stdio.h>
int main(void){
 int i=0,m2=48,m3=7,ip=0;
 printf("Enter the number :");
 scanf("%d",&ip);
 for(;i<27;i+=7,m2<<=7,m3<<=7) {
  ip=ip^m2^m3;
  printf("%d\n",ip);
}
return 0;
}
