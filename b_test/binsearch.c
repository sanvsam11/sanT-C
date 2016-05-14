//binary search
#include<stdio.h>
int main(){
int array[10],s,size=10;
printf("Enter 10 numbers in ascending order:\n");
for(int i=0;i<10;i++) scanf("%d",&array[i]);
printf("\n Enter the number to search:");scanf("%d",&s);
while(1){
 if(s<array[(size/2)-1])size/=2;
 else if(s>array[(size/2)-1]) size+=(size/2);
 else if(s==array[(size/2)-1]){printf("found element at location:%d",size/2);break;}
}
return 0; 
}















