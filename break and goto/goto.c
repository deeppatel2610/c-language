#include<stdio.h>
main()
{
	int x=1,n,sum=1;
	printf("Enter the value of n :");
	scanf("%d",&n);
	start:
	
	sum=sum*x;
	printf("%d ",sum);
	x++;
	if(x<=n)
	{
		goto start;
	
	}
	
}