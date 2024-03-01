#include<stdio.h>
#include<string.h>
main()
{
    int i,n;
    char name[20];
    printf("enter your name :");
    gets(name);
    n=strlen(name);
    
    puts(name);
    
    printf("%d",n);
}