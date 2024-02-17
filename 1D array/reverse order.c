#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter your value of n :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}