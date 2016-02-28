#include<stdio.h>
int main()
{
  struct test{
 char a;
 int b;
 long c;
 float d;
 double e;
}t;
// struct d t=(struct test)malloc(sizeof(struct test));
 t.a='s';
 t.b=123;
 t.c=12345678;
 t.d=1234567890;
 t.e=123456509649056349;
 printf("a:%c,b:%d,c:%d,d:%d,e:%d\n",t.a,t.b,t.c,t.d,t.e);
}
