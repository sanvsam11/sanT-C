//program to swap two rows of a 2D array using a double pointer by passing the array address to a swap function
#include<stdio.h>
void rowSwap(int *mp,int r,int c,int r1,int r2){
 //int **mp = (int**)*mpa;
 for(int i=0;i<c;i++){
  mp[r1*c+i]=mp[r1*c+i]^mp[r2*c+i];
  mp[r2*c+i]=mp[r1*c+i]^mp[r2*c+i];
  mp[r1*c+i]=mp[r1*c+i]^mp[r2*c+i];
}
 printf("Swap done\n");
}
void printArray(int *mpa,int r,int c){//int **mp=(int**)*mpa;
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++)
  printf("%d",mpa[i*c+j]);
 printf("\n");
}
}
int main(){
 int a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
 rowSwap((int*)a,3,5,0,2);
 printArray((int*)a,3,5);
return 0;}
