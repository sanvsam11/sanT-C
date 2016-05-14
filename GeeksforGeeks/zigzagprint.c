#include<stdio.h>
#include<stdlib.h>
int main(void){
int n=0;char* string,*p=0;
string=(char*)malloc(sizeof(char)*50);
printf("\n Enter the string:"); fgets(string,50,stdin); p=&string[0];
printf("\nEnter the value of N:");scanf("%d",&n);
char rows[n][10];
int direction=0;//1=up, 0=down
for(int i=0,j=0;(*p)!='\n';p++){
 if(direction==0) {
  i++;
  if((i)>(n-1)){ direction = 1;}
} 
else {
  i--;
  if((i)<0){ direction = 0;}
}
rows[i][j]=*p;
}
for(int i=0,j=0;i<n;i++){
while(rows[i][j++]!='\0') printf("%c",rows[i][j]);
}
free(string);
return 0;}

/*
Algorithm Prerequisites
1. create n number of arrays to store values in each row
2. have a toggle deciding whether to go up or down
3. if up, row --; else row ++
4. at the top and bottom reverse toggle
5. 
*/
