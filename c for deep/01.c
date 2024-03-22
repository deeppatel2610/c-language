#include<stdio.h>
main()
{
	int n;
	printf("enter youe value of n : ");
	scanf("%d",&n);
	
	int c=n/100;
	
	int d=n/10;
	
	int e=c+d;
	printf("%d",e);
}
