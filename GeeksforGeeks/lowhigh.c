#include <stdio.h>

int main() {
	int t=0;
	scanf("%d",&t);
	while(t--){
	    int l=0,g,n=0,x=0;
	    scanf("%d %d",&n,&x);g=n;
	    while(n--){int i;
	        scanf("%d",&i);
	        if(i<x){printf("%d %d",l,g);break;}
	        l++;g--;
	    }
	}
	return 0;
}
