//c program to replace \t in input string with 4 spaces
#include<stdio.h>
int main(){
 char string[100];
 printf("Enter the string:");
 fgets(string,100,stdin);
 for(int i=0;(i<100)&&(string[i]!='\n');i++){
 if(string[i]=='\t')
}
}
