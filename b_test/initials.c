#include<stdio.h>
#include<string.h>
int main(){
char name[100];
printf("Enter your name:");
//int i=0;
//while((c=fgetc(stdin))!='\n'){ name[i]=c;i++;}
fgets(name,100,stdin);
int l = strlen(name);
name[l-1]='\0';
 printf("%c ",name[0]);
for(int i=1;i<l;i++){
//printf("%c",name[i]);
if((int)(name[i])==32)printf("%c",name[i+1]);
}
return 0;
}
