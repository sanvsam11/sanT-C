// determine the output of a negated number
#include<stdio.h>
void printB(size_t,void const* const);
int main(void){
 int a;
 printf("Enter the value of the integer:");
 scanf("%d",&a);
 printB(sizeof(a),&a);
 return 0;
}
void printB(size_t s, void const*const p){
 unsigned char *b = (unsigned char*)p;
 unsigned char byte;
 for(int i=s;i>=0;i--)
  for(int j=7;j>=0;j--){
   byte = (b[i]>>j)&1;
   printf("%x",byte);
}
 printf("\n");
}
