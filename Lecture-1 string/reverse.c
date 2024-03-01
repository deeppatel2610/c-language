#include<stdio.h>
#include<string.h>
main()
{
    int i,n,j;
    char name[20],riv[20];
    printf("enter your name :");
    gets(name);
    n=strlen(name);
    puts(name);
    
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        riv[i]=name[j];
    }
    puts(riv);
}