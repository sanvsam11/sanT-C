#include<stdio.h>
int main(int argc, char* argv[])
{
 int s=0,n=(int)argv[1];
 for(;n>0;s+=(n%10),n/=10);
 printf("%d",s);
 return 0;
}
