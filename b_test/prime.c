#include<stdio.h>
int main(){
 int n=300;
 int prime_check=1;
 for(int i=3;i<n;i++){
  for(int j=2;j<i;j++){
 if(i%j==0) prime_check=0;
}
if(prime_check==1)printf("%d ",i);
else prime_check=1;
}
return 0;
}
