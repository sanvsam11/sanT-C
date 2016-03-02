#include<stdio.h>
struct test{
int x;
int y;
char a,b,c,d;
float e;
}t;
int main()
{
 struct t s;
 s->x=10;
 s->y=20;
 printf("%d,%d",s.x,s.y);
}
