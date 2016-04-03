#include "ex22.h"
#include<stdio.h>
const char* name = "santhosh";

void scope_demo(int count){
 printf(" \nThe count is : %d",count);
 if(count>10){
  int count = 100;
  printf("Count in this scope : %d",count);  
}
}
int main(int argc, char* argv[]){
 printf("My name : %s,age:%d",name,get_age());
 set_age(100);
 printf("age set to : %d" , get_age());

 printf("\n size is: %d",size);
 print_size();

 printf("Ratio initially: %f",update_ratio(2.0));
 printf("Ratio again: %f ", update_ratio(10.0)) ;
 printf("Ratio once more:%f", update_ratio(300.0));

 int count = 4;
 scope_demo(count);
 scope_demo(count*20);
 printf("count after calling scope_demp: %d",count);
return 0;}
