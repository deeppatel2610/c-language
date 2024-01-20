#include<stdio.h>
main()
{
	int GROSS_SALARY,BASE_SALARY,HRA,DA,TA;
	printf("enter your BASE SALARY :");
	scanf("%d",&BASE_SALARY);
	printf("enter your HRA :");
	scanf("%d",&HRA);
	printf("enter your DA :");
	scanf("%d",&DA);
	printf("enter your TA :");
	scanf("%d",&TA);
	GROSS_SALARY=BASE_SALARY+HRA+DA+TA;
	
	printf("your GROSS SALARY : %d",GROSS_SALARY);
}