#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter your value of n : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		printf("enter your value of n[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("enter your value of n[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	int *z = &c[n];
	
	for(i=0;i<n;i++)
	{
		printf("%d ",*z);
		*z=z+1;
	}
}
