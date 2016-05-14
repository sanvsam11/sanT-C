// c code to toggle next bit if every 3rd bit is set
#include<stdio.h>
int main(void){
 int ip=0,m=1,t=2;
 printf("enter the number");
 scanf("%d",&ip);
 for(int i=0;i<32;i+=4,m<<=3,t<<=3){
  if((ip&m)!=0)ip=ip^t;
 printf("%d\n",ip);
}
 return 0;
}
