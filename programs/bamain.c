#include<stdio.h>
void start_function() __attribute__ ((constructor));
void end_function() __attribute__ ((destructor));
void start_function(){
 printf("\nbefore main run\n");
}
void end_function(){
 printf("\nafter main\n");
}
int main(void){
 printf("\nStart of main\n");
 printf("1\n2\n3\n4\n");
 return 0;
}
