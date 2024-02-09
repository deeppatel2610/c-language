#include<stdio.h>
main()
{
    int a,n,ans=1;
    printf("enter your value :");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        ans=ans*a;
    }
    printf("%d ",ans);
}