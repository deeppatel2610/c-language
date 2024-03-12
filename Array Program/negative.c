#include<stdio.h>
main()
{
    int n,i;
    printf("Enter your value of n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(0>a[i])
        {
            printf("%d",a[i]);
        }
    }
}