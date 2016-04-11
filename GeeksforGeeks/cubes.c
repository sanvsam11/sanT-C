#include <stdio.h>
void lowerprint(int i,int l){
    if((i*i*i)>l) lowerprint(i-1,l);
    printf("%d ",(i*i*i));
}
void printcubes(int l,int r){
    int i=l,m=l*l*l;
    if(i>1)lowerprint(i,l);
    i=l+1;
    while((i*i*i)<r){
        printf("%d ",(i*i*i));
        i++;
    }
}
int main(int argc, char* argv[]){
 printcubes(6119,9384);
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
