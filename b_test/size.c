#include<stdio.h>
//#define findsize(*p) (int)(((p)0+1))

struct mytype{
 int a;
 char b; 
 int c;
 char d;
};
int main(void){
 int x=10;
 int* p=&x;
 int l = (int)((char*)(p+1)-(char*)p);
 printf("%d",l);
// int l2 = (int)((p)0+1);
// printf("\n %d\n",l2);
 struct mytype* mtp;
 int mtl=(int)((char*)(mtp+1)-(char*)mtp);
 printf("\n%d\n",mtl);

return 0;
}
