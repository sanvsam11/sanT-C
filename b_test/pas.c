//program to create and use a pointer to an array of string in c
#include<stdio.h>
int main(void){
 
char *string;
string=(char*)malloc(sizeof(char)*20);
scanf("%s",string);
printf("%s",*string);
/*
char* string_array[10];
printf("Enter 10 strings of size 10");
 for(int i=0;i<10;i++) scanf("%s",string_array[i]);
 for(int i=0;i<10;i++) printf("%s",string_array[i]);
*/ return 0;
}
