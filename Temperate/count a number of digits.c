#include<stdio.h>
main()
{
    int n,count;
    printf("enter your value n :");
    scanf("%d",&n);
    for(count=0;n>0;count++)
    {
        n=n/10;
    }
    printf("%d",count);
}