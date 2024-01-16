#include<stdio.h>
main()
{
	int si,P,R,T;
	printf("enter the value of P:");
	scanf("%d",&P);
	printf("enter the value of R:");
	scanf("%d",&R);
	printf("enter the value of T:");
	scanf("%d",&T);
	
	si=P*R*T;
	printf("interest=%d",si);
}