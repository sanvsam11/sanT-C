#include<stdio.h>
int main(void)
{
 int a=1;
 char* p=(char*)&a;
 printf("%d",(int)(*p));
 if((*p)==0) printf("big endian\n");
 else printf("little endian");
 return 0;
}
