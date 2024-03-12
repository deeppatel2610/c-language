#include<stdio.h>
main()
{
	int n,m,i,j;
	printf("Enter your value n:");
	scanf("%d",&n);
	printf("Enter your value m :");
	scanf("%d",&m);
	int a[n][m];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter value of a[%d][%d] :",i,j);
			scanf(" %d",&a[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if (i==0 || i==n-1 || j==0 || j==m-1)
			{
               printf(" %d",a[i][j]);
               sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("sum is %d",sum);
}