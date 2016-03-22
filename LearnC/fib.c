#include<stdio.h>
int* fibonacci(int n){
 int a=-1,b=1;
 int *out; 
for(int i=0;i<n;i++){
 *(out+i)=a+b;
 a=b;b=i;
}
return out;
}
void printFibonacci(int* a,int n){
 for(int i=0;i<n;i++) printf("%d",*(a+i));
}
int main(int argc, char* argv[]){
 int n;
 int *a; 
 n = 10;
 printFibonacci(fibonacci(n),n);
 return 0;
}
