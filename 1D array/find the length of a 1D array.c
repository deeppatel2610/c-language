#include<stdio.h>
main()
{
    int n,i,count=0;
    printf("enter your value of n :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter your value a[%d] :",i);
        scanf("%d",&a[i]);
        count++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n%d",count);
}