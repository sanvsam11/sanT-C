#include <stdio.h>
void lowerprint(int i,int l,int r){int j=(i-1)*(i-1)*(i-1);
    if((j>l)&&(j>0)&&(j<r)){ lowerprint(j,l,r);
    printf("%d ",j);}
}
void printcubes(int l,int r){
    int i=l;
    if(i>1)lowerprint(i,l,r);
    i=l+1;
    while((i*i*i)<r){
        printf("%d ",(i*i*i));
        i++;
    }
}
int main(int argc, char* argv[]){
 int a=0,b=0;
// a=(int)argv[1];
// b = (int)argv[2];
scanf("%d %d",&a,&b);
printcubes(a,b);
 return 0;
}
















/*
#include <stdio.h>
void lowerprint(int i,int l){
    if((i*i*i)>l) lowerprint(i-1,l);
    printf("%d ",(i*i*i));
}
void print(int l,int r){
    int i=l,m=l*l*l;
    if(i>1)lowerprint(i,l);
    i=l+1;
    while((i*i*i)<r){
        printf("%d ",(i*i*i));
        i++;
    }
}
int main() {int t;
    scanf("%d",&t);
    while(t>0){int l,r;
        scanf("%d %d",&l,&r);
        print(l,r);
    }
	return 0;
}
*/
