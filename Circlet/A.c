#include<stdio.h>
main()
{
	int x,y;  
	
	for(x=1; x<=5; x++)
	{
		for(y=1; y<=5; y++)
		{
			if(x==1 || y==1 || x==3 || y==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}