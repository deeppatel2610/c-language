#include<stdio.h>
main()
{
    int i,n,ans=1;
    printf("Enter your value of n :");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ans=a[i]*a[i];
        printf("%d ",ans);
    }
}