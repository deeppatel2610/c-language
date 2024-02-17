#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter your value of n :");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf("%d",b[i]);
    }
}