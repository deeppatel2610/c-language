#include<stdio.h>
main()
{
    char n;
    printf("enter :");
    scanf(" %c",&n);
    
    if (65<=n && n<=90)
    {
        printf("alphabet");
    }
    else if(97<=n && n<=122)
    {
        printf("small alphabet");
    }
    else if(n<=57 && n>=48)
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }
}
