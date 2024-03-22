#include<stdio.h>
#include<string.h>
struct mobile 
{
	char ca_name[100];
	char m_name[100];
	char co_name[100];
	int price;
};

main()
{
	int n,i;
	printf("enter your mobile total value : ");
	scanf("%d",&n);
	
	struct mobile m[n];
	
	for(i=0;i<n;i++)
	{
		printf("company name : ");
		scanf("%s",&m[i].co_name);
		printf("color name : ");
		scanf("%s",&m[i].ca_name);
		printf("model name : ");
		scanf("%s",&m[i].m_name);
		printf("price : ");
		scanf("%d",&m[i].price);
	}
	
	for(i=0;i<n;i++)
	{
		printf("company name : %s\n",m[i].ca_name);
		printf("color name : %s\n",m[i].co_name);
		printf("model name : %s\n",m[i].m_name);
		printf("price : %d\n\n",m[i].price);
	}
	
	
}
