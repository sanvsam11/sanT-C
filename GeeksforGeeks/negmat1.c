#include<stdio.h>
int main(void){
int a[4][4],i=0,j=3,nv=0;
FILE *in_stream = fopen("mx_i.txt","r");
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
 fscanf(in_stream,"%d",&a[i][j]);

while(i<4&&j>=0){
  if(a[i][j]<0) {nv=nv+j+1;i++;}
  else {j--; }
}
printf("%d\n",nv);
return 0;}
