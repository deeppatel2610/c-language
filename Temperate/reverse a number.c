#include<stdio.h>
main()
{
	int n,reverse=0,reminder;
	printf("Enter the value of  value n :");
	scanf("%d",&n);
	while(n!=0)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n/=10;
	}
	printf("reverse number:%d",reverse);
}