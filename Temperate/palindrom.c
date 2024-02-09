#include<stdio.h>
main()
{
	int n,reverse=0,reminder,original;
	printf("Enter the of value n :");
	scanf("%d",&n);
	original=n;
	
	while(n!=0)
	{
		reminder=n%10;
		reverse=reverse*10+reminder;
		n/=10;
	}
	if(original==reverse)
	{
		printf("%d is a palindrome\n",original);
		printf("%d",original);
		
	}
	else
	{
		printf("%d is not a palindrome",original);
	}
}