#include<stdio.h>
main()
{
	int n;
	printf("Enter value of n :");
	scanf("%d",&n);
	int a[n];
	int *x=&a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1; i>=0; i--)
	{
	   printf("%d ",*&a[i]);
	}
}