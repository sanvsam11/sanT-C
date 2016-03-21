//8 queens problem

#include<stdio.h>
int validity(int i,int j,int a[][8]){
 int col_check=0,diag_check=0;
 for(int k=0;k<8&&i-k>=0&&j-k>=0;k++){
  col_check=col_check|a[k][j];
  if(col_check==1) return 1;
  else {
    diag_check=diag_check|a[i-k][j-k];
    if(diag_check==1) return 1;
   }
  }
return 0;
 }
/*
int* arrayReset(int a[][8]){
 for(int i=0;i<8;i++)
  for(int j=0;j<8;j++)
   a[i][j]=0;
return a;
}
*/
void printArray(int a[][8]){
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   printf("%d\t",a[i][j]);
  }printf("\n");
 }
}
int main(int argc,char* argv[])
{ 
 int a[8][8];
  for(int i=0;i<8;i++)for(int j=0;j<8;j++) a[i][j]=0;

 int start_position=0,nogo=0;
 while(start_position>8){
for(int i=0;i<8;i++) for(int j=0;j<8;j++) a[i][j]=0;
 a[0][start_position]=1;
 for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
   if(validity(i,j,a)==0){a[i][j]=1;break;}
   if(j==7) nogo=1;
   }
 if(nogo==1) break;
 }
if(nogo==0)break; else start_position++;
}
printArray(a);
return 0;
}
