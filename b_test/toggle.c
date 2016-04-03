#include<stdio.h>
int main()
{
 int p=2,m=1,n=10,mi=~m;
 for(int i=1;i<p;i++,m<<=1);
  if((n&m)==0) n=n|m;
  else n=n&(mi);
  printf("%d\n",n);
 return 0;
}
