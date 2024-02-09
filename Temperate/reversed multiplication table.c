#include<stdio.h>
main()
{
    int n,i;
    printf("enter your value n :");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}