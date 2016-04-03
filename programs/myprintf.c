#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
int print(char* toPrint,...){
 char* tp_ptr = toPrint;
 int i=0;
 va_list argument;
 va_start(argument,toPrint);
 
 while(*tp_ptr){
  if(*tp_ptr!='%') putchar((int)*tp_ptr);
  else {
   tp_ptr++;
  switch(*tp_ptr){
   case 'c': i=va_arg(argument,int); putchar(i);break;
   case 'd': i=va_arg(argument,int); putchar((char)i);break;
  }
}
tp_ptr++;}
va_end(argument);
return 1;
}

int main(int argc,char*argv[]){//for testing the function
print("testing with data: %d",65);
return 0;
}
