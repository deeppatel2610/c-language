#include<stdio.h>
#include<string.h>

int length_of_string(char naam[])
{
    int a=strlen(naam);
    return a;
}

main()
{
    char name[30];
    printf("entre your name : ");
    gets(name);
    
    int n = length_of_string(name);
    printf("%d",n);
}