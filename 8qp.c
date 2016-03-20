//8 queens problem

#include<stdio.h>
int main()
{
 int a[8][8],k=0,isvalid=0;

 for(int i=0;i<8;i++)
  for(int j=0;j<8;j++)
   a[i][j]=0;

 for(int i=0;i<8;i++)
  for(int j=0;j<8;j++)
  {
   while(k++<8){
if(a[i][k]||a[k][j]||a[i+k][j+k])isvalid=0;
 else isvalid=1;

}
   if(isvalid) a[i][j]=1;
 }

 for(int i=0;i<8;i++){
 for(int j=0;j<8;j++) 
  printf("%d ",a[i][j]);
printf("\n");
}
}
