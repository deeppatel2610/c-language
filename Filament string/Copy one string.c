#include<stdio.h>
#include<string.h>
main()
{
    char name[50],nameC[50];
    printf("Enter your name : ");
    gets(name);
    strcpy(nameC,name);
    puts(nameC);
}