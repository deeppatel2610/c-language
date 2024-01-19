#include<stdio.h>
main()
{
	int x,y;
	printf("enter your value x y :");
	scanf("%d%d",&x,&y);
	x=x*y;
	y=x/y;
	x=x/y;
	printf("x=%d\ny=%d",x,y);
}