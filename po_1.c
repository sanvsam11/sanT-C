#include<stdio.h>

int main(int argc,int argv[])
{

 int a = 50;
 int *b = &a;
 int **c = &b;
 int ***d = &c;
 int *p;
 int ar[]={1,2,3,4,5,6};
 //printf("%d %d %d %d\n",a,*b,**c,***d);
 printf("%x\n",a);
 //printf("%o\n",a);
 printf("Address\tValue\n%p\t%d\n%p\t%d\n%p\t%d\naddress of array identifier:%p\n"
"next address after array:%p,value:%d",
(&ar[0]),ar[0],
&ar[0]+1,*((&ar[0])+1),
&ar[3]-1,*(&ar[3]-1),ar,ar+1,*(ar+1));
 p=(int*)(&ar+1);
 printf("\n\nAgain next address after array%p,value of pointer p:%p,value at p-1:%d",&ar+1,p,*(p-1));
 printf("\n");
 return 0;
}
