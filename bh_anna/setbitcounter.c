#include<stdio.h>
int main(void){
 int input,mask=1,count=0;
 printf("Enter the number to find number of set bits:");
 scanf("%d",&input);
 do{
  //printf("%d: %d\n ",count++,mask);
  if(input&mask)count++;
}while(mask<<=1);
printf("\nNumber of set bits in %d is %d.",input,count);
 return 0;
}
