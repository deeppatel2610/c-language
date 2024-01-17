#include<stdio.h>
main()
{
//	4.WAP to find a the answer given formula (x-y)3.
//	x³-3x²y-3xy²+y³
	int x,y,ans;
	printf("enter youe value x & y :");
	scanf("%d%d",&x,&y);
	ans=(x*x*x)-3*(x*x*y)-3*(x*y*y)+(y*y*y);
	printf("%d",ans);
}