#include<stdio.h>
main()
{
	int x,y;
	
	for(x=1; x<=7; x++)
	{
		for(y=1; y<=4; y++)
		{
			if(x==1 && y==2)
			{
				printf(" *");
			}
			else if(x==1 && y==3)
			{
				printf(" *");
			}
			else if(x==1 && y==4)
			{
				printf(" *");
			}
			else if(x==2 && y==1)
			{
				printf(" *");
			}
			else if(x==2 && y==4)
			{
				printf("   *");
			}
			else if(x==3 && y==1)
			{
				printf(" *");
			}
			else if(x==3 && y==4)
			{
					printf("   *");
			}
			else if(x==4 && y==1)
			{
				printf(" *");
			}
			else if(x==4 && y==2)
			{
				printf(" *");
			}
			else if(x==4 && y==3)
			{
				printf(" *");
			}
			else if(x==5 && y==1)
			{
				printf(" *");
			}
			else if(x==6 && y==1)
			{
				printf(" *");
			}
			else if(x==7 && y==1)
			{
				printf(" *");
			}
			else if(x==5 && y==4)
			{
				printf("  *");
			}
			else if(x==6 && y==4)
			{
				printf("   *");
			}
			else if(x==7 && y==4)
			{
				printf("    *");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}