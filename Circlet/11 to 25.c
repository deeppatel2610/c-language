#include<stdio.h>
main()
{
	int x,y,z=11;
	
	for(x=1; x<=5; x++)
	{
        for(y=x; y>=1; y--)
		{
			printf("%d ",z);
			z++;
		}
		printf("\n");		
	}	
	
}