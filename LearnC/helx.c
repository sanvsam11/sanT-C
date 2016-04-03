#include<stdio.h>
int main(int argc,char*argv[])
{
 int a[][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
 int k=0,size =  4;
 
 for(int i=size-1,j=0;i>0;i--,j++){
 
 for(k=j;k<i;k++) printf("%d",a[j][k]);
 for(k=j;k<i;k++) printf("%d",a[k][i]);
 for(k=i;k>j;k++) printf("%d",a[i][k]);
 for(k=i;k>j;k++) printf("%d",a[k][j]);
}
return 0;
}
