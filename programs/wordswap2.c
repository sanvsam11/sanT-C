#include<stdio.h>
//#include<stdlib.h>
int main(){
// char a[20][10],c;
 char str[50];
// s=(char*)malloc(50);
 fgets(str,50,stdin);
 printf("%s",str);
/*
 int w=0,i=0;
 while(c!='\n'){
  a[w][i]=c;i++;
 c=getc(stdin);
 if(c=='\n') break;
else if(c==' ') {a[w][i]='\n';w++;i=0;c=getc(stdin);}
}
for(int k=w;k>=0;k--){
 for(i=0;a[k][i]!='\n';i++){
  printf("%c",a[k][i]);
}
printf("\n");
}
*/
return 0;
}
