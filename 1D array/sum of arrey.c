#include<stdio.h>
main()
{
    int n,i;
    printf("Enter your value of n :");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Enter b[%d] :",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=b[i]+a[i];
        printf("%d ",c[i]);
    }
}