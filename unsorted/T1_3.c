#include<stdio.h>
void f(char *);
int main(){
f("123");printf("\n");
return 0;}
void f(char a[]){
  if(a[0]=='\0') return;
  f(a+1);
  f(a+1);
  printf("%c",a[0]);
}
