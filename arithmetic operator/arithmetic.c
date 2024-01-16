#include<stdio.h>
main()
{
	int x,y,ans=0;
	printf("enter your value x y :");
	scanf("%d%d",&x,&y);
	ans=x+y;
	printf("%d\n",ans);
	ans=0;
	ans=x-y;
	printf("%d\n",ans);
	ans=0;
	ans=x*y;
	printf("%d\n",ans);
	ans=0;
	ans=x/y;
	printf("%d\n",ans);
	ans=0;
	ans=x%y;
	printf("%d",ans);
}