#include<stdio.h>

int main()
{
 struct test {
  int x;int y;char c;float f;
 }s;
s.x=10;s.y=20;s.c='a';s.f=3.14; 
printf("%d,%d\n",s.x,s.y);
}
