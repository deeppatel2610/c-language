#include<stdio.h>
#include<stdlib.h>

main()
{
	FILE *f1,*f2;
	f1=fopen("dp.txt","r");
	f2=fopen("deep.txt","w");
	int i;
	char a;
	
	a = fgetc(f1);
	while(a!=EOF)
	{
		fputc(a,f2);
		a = fgetc(f1);
	}
	
}