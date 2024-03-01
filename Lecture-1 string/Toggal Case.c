#include<stdio.h>
#include<string.h>
main()
{
    int i,n;
    char name[20];
    printf("enter your name :");
    gets(name);
    
    if(name[0]>=97 && name[0]<=122)
    {
        name[0]-=32;
    }
    puts(name);
}