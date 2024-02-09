#include<stdio.h>
main()
{
	int x,y;
	for(x=5;x>=1;x--)
	{
		for(y=x;y<=5;y++)
		{
			if(y%2==0)
			{
				printf("| ");
			}
			else
			{
				printf("- ");
			}
			
		}
		printf("\n");
	}
}