#include<stdio.h>
#include<string.h>
main()
{
    char name[100];
    printf("Enter your name : ");
    gets(name);
    int a = strlen(name);
    int *b = &a;
    printf("%d",*b);
}