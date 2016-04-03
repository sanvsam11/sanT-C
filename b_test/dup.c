#include<stdio.h>
int main()
{
 int a[]={1,2,5,3,2,4,6,1};
 int l=sizeof(a)/sizeof(int);
 for(int i=0;i<l;i++)
  for(int j=i;j<l;j++)
   if(a[i]>a[j]){
   a[i]=a[i]^a[j];
   a[j]=a[i]^a[j];
   a[i]=a[i]^a[j];
}

// for(int i=0;i<l;i++) printf("%d ",a[i]);

int temp=a[0];
for(int i=1;i<l;i++)
{
  if(temp==a[i]) a[i]=0;
  else temp=a[i];
}
for(int i=0;i<l;i++) printf("%d ",a[i]);
return 0;}
