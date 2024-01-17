#include<stdio.h>
main()
{
//	6.WAP to find a the answer given formula (x-y-z)3.
//	(x+y+z) * (x+y+z) * (x+y+z)
	int x,y,z,ans;
	printf("enter youe value x y & z:");
	scanf("%d%d%d",&x,&y,&z);
	ans=(x-y-z) * (x-y-z) * (x-y-z);
	printf("%d",ans);
}