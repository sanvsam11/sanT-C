#include <stdio.h>

int main() {
	int t=0;
	scanf("%d",&t);
	while(t--){int i=0,n=0;float s=0,x=0;
	    if(t>20) n=t;
	    else scanf("%d",&n);
	    if(n<50)
	    for(i=1;i<=n;i++){scanf("%f",&x);
	        s+=x;printf("%0.3f ",((double)s/(double)i));
	    }
	}
	return 0;
}
