#include<stdio.h>
main()
{
//2.WAP to find a the answer given formula (x-y)2.
//  x^2 - 2xy + y^2
	int x,y,ans;
	printf("enter your value x & y :");
	scanf("%d%d",&x,&y);
	ans=(x*x)-2*x*y+(y*y);
	printf("%d",ans);
}