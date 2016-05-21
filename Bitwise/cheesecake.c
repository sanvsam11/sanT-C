//monk wants cheesecakes. bob the baker will give him as many as 1's in the k numbers he chooses from n given numbers. program to find maximum below.
#include <stdio.h>

int main()
{
    int t,n,k,num,c=0,s=0;
    printf("Enter the number of testcases:");scanf("%d",&t);
    while(t--){n=0;k=0;
    	printf("\nEnter the value of N and K:");scanf("%d %d",&n,&k);
    	int ca[k];
    	for(int i=0;i<k;i++) ca[i]=0;
    	printf("\nEnter the numbers:");
	while(n--){num=0;c=0;
    		scanf("%d",&num);
    		while(num>0){c++;num=num&(num-1);}
    		for(int i=0;i<k;i++)if(c>ca[i]){ca[i]=c;break;}
    	}
    	for(int i=0;i<k;i++) 
		s=s+ca[i];
    	printf("\n Cheesecake count for testcase #%d is: %d\n",t+1,s);
    }
    return 0;
} 
