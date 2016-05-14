// c program to find number of n digit numbers with consecutive 1 in their bit patterns
int s,ss,m=1,count=1;
int setbits(int ip){int sbm=1,op=0;
for(int i=0;i<32;i++,sbm<<=1)if(ip&sbm)op++;
return op;
}
int max(int d){int m1=1;
for(int i=1;i<d;i++) m1=(m1<<1)+1;
return m1;
}
void consecutivebitscounter(int d){ 
if(d>2){
  while(s=max(d)) {s=s^m;ss=s;if(setbits(s)==1)break;
while(1){
count++;
if((ss&1)==1)break;
else ss>>=1;
}
m=(m<<1)+1;
}
}
}
#include<stdio.h>
int main(void){
 //int k=0,i=1,n=0,max=3,cons1=1,cons,count=0;
int n=0; 
printf("Enter the number of digits:");scanf("%d",&n);
consecutivebitscounter(n);
// printf("\n%d\n",max(n)); 
//printf("%d",setbits(n));
printf("\ncount:%d\n",count);
return 0;}
