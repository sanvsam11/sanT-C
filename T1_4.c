#include<stdio.h>
int main()
{
 //int a=20;
 char *a[2]={"temp","3579"};
 printf("%c",*(a[1]+1));
 printf("%c",(*(a+1))[2]);
 printf("%c\n",a[1][2]);
 printf("%c,%c\n",*(a[3]+2),a[0][3]);
return 0;
}
