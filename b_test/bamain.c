//program to execute functions before and after main
#include<stdio.h>
void beforemain ()__attribute__(constructor)
{
 printf("before main");
}
int main(){

return 0;}
