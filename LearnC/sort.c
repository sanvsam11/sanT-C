#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>

void die(const char* message){
 if(errno) perror(message);
 else printf("Error: %s\n",message);
 exit(1);
}
int ascending(double a, double b){
 if(a>b) return 1;
  else return 0;
}
int descending(double a,double b){
 if(a<b) return 1;
 else return 0;
}
double* sortFunction(double input[],int n,int (*compFun)(double a,double b)){
 double *ip = (double*) malloc(sizeof(double)*n); 
 memcpy(ip,input,n*sizeof(double));
for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)
 {
  if(compFun(ip[i],ip[j])>0){
  double temp = ip[j];
  ip[j] = ip[i];
  ip[i] = temp; 
   }
 }
return ip;
}
void printSequence(double *a,int n){
 for(int i=0;i<n;i++) printf("%f\n",*(a+i));
}
int main(int argc,char* argv[]){
// if(argc<3) die("Usage: sort 1 2 3 4 5 ..");
 //int n = (int)argv[1];
  int n=0;
printf("Enter N:");scanf("%d",&n); 
double *a,*ap;
 a = (double*)malloc(sizeof(double)*n);
 printf("\n Enter the sequence");
for(int i=0;i<n;i++) scanf("%lf",&a[i]);
 ap = sortFunction(a,n,descending);
 printSequence(ap,n);
 free (ap);free(a);
return 0;
}

