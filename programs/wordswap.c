#include<stdio.h>
#include<stdlib.h>
int main(){
 char word[20][10],*s,*p;
 printf("Enter the sentence:");
 s=(char*)malloc(sizeof(char)*100);
fgets(s,100,stdin);p=s;
// printf("%c %c",*p,*(p+2));
 int w=0,i=0;
while((*p)!='\n'){
 if((*p)==' '){word[w][i]='\n';w++;i=0;}
 else { word[w][i]=(*p);i++;}
p++;}
word[w][i]='\n';
for(int j=w;j>=0;j--){
 for(int k=0;(word[j][k]!='\n')&&(word[j][k]!='\0');k++) 
 printf("%c",word[j][k]);
 printf("\n");
}
free(s);
return 0;
}
