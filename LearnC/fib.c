#include<stdio.h>
#include<stdlib.h>
int* fibonacci(int n){
 int a=-1,b=1,o=0;
 int *out; 
 out = (int*)malloc(sizeof(int)*n);
for(int i=0;i<n;i++){
 o=a+b;*(out+i)=o;
 a=b;b=o;
}
return out;
}
void printFibonacci(int* a,int n){
 for(int i=0;i<n;i++) printf("%d ",*(a+i));
}
int main(int argc, char* argv[]){
 int n;
// int *a; 
 n = 10;
 printFibonacci(fibonacci(n),n);printf("\n");
 return 0;
}
