//program to add two numbers using recursion
#include<stdio.h>
int recadd(int a,int b){
 if(b==1) return a+1;
 else return 1+recadd(a,b-1);
}
int main(){
 int a=4,b=6;
 printf("%d\n",recadd(a,b));
 return 0;
}
