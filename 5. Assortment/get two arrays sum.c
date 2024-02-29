#include<stdio.h>
main()
{
    int n,i;
    printf("enter your value of n : ");
    scanf("%d",&n);
    int a[n],b[n],sum[n];
    
    for(i=0;i<n;i++)
    {
        printf("enter your value a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("enter your value b[%d] : ",i);
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",sum[i]);
    }
}