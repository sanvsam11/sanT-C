#include<stdio.h>
int main(int argc, char* argv[]){
 char a[30],b[30];
 char* p,*q,c;
 int la=0,lb=0,i=0,e=0;  
fgets(a,30,stdin);fgets(b,30,stdin);
for(int i=0;i<30;i++)
if(a[i]=='\n'){la=i;a[i]='\0';break;}

for(int i=0;i<30;i++)
if(b[i]=='\n'){lb=i;b[i]='\0';break;}
/*
while(1){scanf("%c",&c);
if(c=='\n') break;
else a[i]=c;
i++;}la=i;i=0;a[la-1]='\0';
while(1){scanf("%c",&c);
if(c=='\n')break;
else b[i]=c;
i++;}lb=i;b[lb-1]='\0';
*/
 p=&a[0];q=&b[0];
 if((la-lb)>1||(lb-la)>1) printf("not comparable");
 else {while(*p!='\0'||*q!='\0'){
  if(*p==*q){p++;q++;}
 else{
     if(la>lb) {p++;e++;} else if (la<lb) {q++;e++;}
     else {e++;p++;q++;}
}
}
printf("\n%d\n",e);
}  return 0;
}
