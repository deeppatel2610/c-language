#include<stdio.h>

void divi(int n)
{
	if((n%3==0) || (n%5==0))
	{
		printf("divisible");
	}
	else
	{
		printf("not divisible");
	}
}

main()
{
	int n;
	printf("Enter your value of n : ");
	scanf("%d",&n);
	divi(n);
	
}
