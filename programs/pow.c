#include<stdio.h>
long int power(int a, int b){long int r=1;
 if(b>0)while(b-->0)r*=(long int)a;
 else if(b==0) return 1;
 //else if(b<0) 
return r;
}
int main(int argc, char* argv[]){
int a=0,b=0;
printf("Enter the number and the power to which it must be raised to:");
scanf("%d %d",&a,&b);
long int r = power(a,b);
printf("%ld\n",r);
return 0;
}
