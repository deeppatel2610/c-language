#include<stdio.h>
main()
{
    int x,n,sum=0;
    printf("enter your value :");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        sum=sum+x;
    }
    printf("%d ",sum);
}