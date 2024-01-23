#include<stdio.h>
main()
{
	int num;
	
	printf("enter your value :");
	scanf("%d",&num);
	
	if(num>=0)
	{
		if (num==0)
		{
			printf("neutral");
		}
		else
		{
			printf("poshitiv");
		}
	}
	else
	{
		printf("negitiv");
	}
}

