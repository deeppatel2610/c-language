#include<stdio.h>
main()
{
    int x=1,n;
    printf("enter your value n :");
    scanf("%d",&n);
    do
    {
        printf("%d ",n);
        n--;
    }while(x<=n);
}