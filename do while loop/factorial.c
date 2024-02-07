#include<stdio.h>
main()
{
    int x=1,n,sum=1;
    printf("enter your value n :");
    scanf("%d",&n);
    do
    {
        sum=sum*x;
        x++;
    }while(x<=n);
    printf("%d ",sum);
}