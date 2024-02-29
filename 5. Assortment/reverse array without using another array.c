#include<stdio.h>
main()
{
    int n,i,max=1;
    printf("enter your value of n : ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}