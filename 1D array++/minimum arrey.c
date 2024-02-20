#include<stdio.h>
main()
{
    int n,i;
    printf("enter your value  of n:");
    scanf("%d",&n);
    int a[n],mini=5;
    for(i=0;i<n;i++)
    {
        printf("enter your value a[%d] :",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(mini>a[i])
        {
            mini=a[i];
        }
    }
    printf("%d",mini);
}
