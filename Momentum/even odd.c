#include<stdio.h>
main()
{
    int n;
    printf("enter your value n :");
    scanf("%d",&n);
    
    (n%2==0) ? printf("your number even %d",n) : printf("your number odd %d",n);
}