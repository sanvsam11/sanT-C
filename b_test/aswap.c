#include<stdio.h>
int main(){
 int a[]={1,2,3,4,5},b[]={6,7,8,9,10};
 int l=sizeof(a)/sizeof(int);
 for(int i=0;i<l;i++){
  a[i]=a[i]^b[i];
  b[i]=a[i]^b[i];
  a[i]=a[i]^b[i];
}
for(int i=0;i<l;i++)
 printf("A:%d B:%d\n",a[i],b[i]);
return 0;
}
