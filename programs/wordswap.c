#include<stdio.h>
int main(){
 char a[20][10],c=getc(stdin);
 int w=0,i=0;
 while(c!='\n'){
  a[w][i]=c;i++;
 c=getc(stdin);
 if(c=='\n') break;
else if(c==' ') {w++;c=getc(stdin);}
}
for(int k=w;k>=0;k--){
 for(i=0;a[k][i]!='\n';i++){
  printf("%c",a[k][i]);
}
printf("\n");
}
return 0;
}
