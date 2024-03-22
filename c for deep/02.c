#include<stdio.h>
#include<string.h>

int conut(char n[])
{
	int i,j;
	for(i=0;n[i]!='\0';i++)
	{
		if((n[i]=='a') || (n[i]=='e') || (n[i]=='i') || (n[i]=='o') || (n[i]=='u'))
		{
			j++;	
		}
	}
	return j;
}
//aeiou

main()
{
	char name[100];
	printf("enter : ");
	gets(name);
	puts(name);
	int c=conut(name);
	printf("%d",c); 
}
