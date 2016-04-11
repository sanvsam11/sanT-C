#include<stdio.h>
#include<stdlib.h>
void printBits(size_t const size,void const * const ptr){
unsigned char * p = (unsigned char*)ptr;
unsigned char byte;
for(size_t i = size-1;i>=0;i--)
  for(int j=0;j<8;j++){
 byte = p[i] & (1<<j);byte >>=j;  
 printf("%u",byte);
}puts("");
}
int main(void){
 int x;//c=0xFFFFFFFF;
 int b0=0,b1=0,b2=0,b3=0; 
printf("Enter a number");
 scanf("%d",&x);
 //printf("%x",c);
 b0 = (x & 0x000000FF) <<24;
 b1 = (x & 0x0000FF00) <<8;
 b2 = (x & 0x00FF0000) >>8;
 b3 = (x & 0xFF000000) >>24; 
// x = b0 | b1 | b2 | b3 ;
// printBits(sizeof(int), &x);
printf("%d %d %d %d",b0,b1,b2,b3);
return 0;
}
