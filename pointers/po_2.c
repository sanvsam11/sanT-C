#include<stdio.h>
int main()
{
 int x = 10;
 char* cp=(char*)(&x);
 for(int i=0;i<4;i++,cp++) printf("%p-%c\n",cp,(char)*cp);
 return 0;
}
