// program to find differnce between functionality of a pointer and an array
#include<stdio.h>
int main(){
 int a[2]={10,11};
 int *p;
 p=a;
 printf("a:%p\np:%p\n*a:%d\n*p:%d\na++:%p\n++p:%p\n*a:%d\n*p:%d\n",a,p,*a,*p,(a+1),++p,a[0],p[0]);
 return 0;
}
