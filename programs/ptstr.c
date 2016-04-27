#include<stdio.h>
struct example{
 int a;
 float b;
 char c;
};
typedef struct example ex;
ex* function_returning_struct_pointer(int a,float b,char c){
 ex* e=(ex*)malloc(sizeof(ex)); 
e->a=a;
 e->b=b;
 e->c=c;
 return e;
}
int main(void){
 ex* e;
 e=function_returning_struct_pointer(10,10.34,'a');
 printf("\n%d\n%f\n%c",e->a,e->b,e->c);
 return 0;
}
