#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter value of a :");
	scanf("%d",&a);
	printf("Enter value of b :");
	scanf("%d",&b);

	int *x=&a;
	int *y=&b;

	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;

	printf("a is :%d\n",a);
	printf("b is :%d",b);
}