#include<stdio.h>
main()
{
    int n,i,ans=0;
    printf("Enter your value of n :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        ans=ans+a[i];
    }
    ans=ans/n;
    printf("\n%d",ans);
}