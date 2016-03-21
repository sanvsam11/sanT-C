#include<stdio.h>//program to check endianness of the system and to output in both formats

void memPrinter(char *p,int n){
 for(int i=0;i<n;i++,p++)
{
 
}
}
int main(){
/*
int i=1,*p=&i;
char* pointer=(char*)p;
if(*pointer==1) printf("Little Endiann\n");
else printf("Big Endian\n");
*/
//program to get an input and check if it is stored in big or little endian
union uknipt{
 char c;
 int i;
 float f;
}ip;
 printf("Enter a value");
 scanf("%f",&ip.f);
 //char *p=(char*)&ip.f;
 int n=sizeof(ip.f);
 memPrinter(&ip.f,n);
 // for(int i=0;i<n;i++,p++)
 // printf("%x\n",p[i]);

 //printf("%d",n);

return 0;
}
