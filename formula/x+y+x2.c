#include<stdio.h>
main()
{
//	7.WAP to find a the answer given formula (x+y+z)2.
//	x2+y2+z2+2xy+2yz+2xz
	int x,y,z,ans;
	printf("enter youe value x y & z:");
	scanf("%d%d%d",&x,&y,&z);
	ans=x*2+y*2+z*2+2*x*y+2*y*z+2*x*z;
	printf("%d",ans);
}