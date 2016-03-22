#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
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
 for(int i=0;i<n;i++)
  for(int j=i+1;j<n;j++)
 {
  if(compFun(input[i],input[j])>0){
  double temp = input[j];
  input[j] = input[i];
  input[i] = temp; 
   }
 }
double *ip = input;
return ip;
}
void printSequence(double *a,int n){
 for(int i=0;i<n;i++) printf("%f\n",*(a+i));
}
int main(int argc,char* argv[]){
 if(argc<3) die("Usage: sort n 1 2 3 4 5 ..");
 int n = (int)argv[1];
 double a[n],*ap;
 for(int i=0;i<n;i++) a[i] = (double)*argv[i+2];
 ap = sortFunction(a,n,ascending);
 printSequence(a,n);
 return 0;
}

