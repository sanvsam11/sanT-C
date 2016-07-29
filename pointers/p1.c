#include<stdio.h>
int main()
{
 int array[5]={1,2,3,4,5};
 char *p;
 p=(char*)(&array);
 while(*p++!='\0')printf("\n%c",*p);
 //printf("%c\n",*p);
return 0;
}
