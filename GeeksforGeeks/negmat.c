#include<stdio.h>
int main(void){
int a[4][4],r1=0,r2=0,r3=0,r4=0,c1=0,c2=0,c3=0,c4=0,j=0;
FILE *in_str = fopen("mx_i.txt","r");

for(int i=0;i<4;i++)  fscanf(in_str,"%d %d %d %d",&a[i][j],&a[i][j+1],&a[i][j+2],&a[i][j+3]);

for(int k=0;k<4;k++){
r1=(a[0][k]<0)?r1+1:r1;
r2=(a[1][k]<0)?r2+1:r2;
r3=(a[2][k]<0)?r3+1:r3;
r4=(a[3][k]<0)?r4+1:r4;
c1=(a[k][0]<0)?c1+1:c1;
c2=(a[k][1]<0)?c2+1:c2;
c3=(a[k][2]<0)?c3+1:c3;
c4=(a[k][3]<0)?c4+1:c4;

}
printf("R1:%d, R2:%d, R3:%d, R4:%d\nC1:%d, C2:%d, C3:%d, C4:%d\n",r1,r2,r3,r4,c1,c2,c3,c4);
return 0;}
