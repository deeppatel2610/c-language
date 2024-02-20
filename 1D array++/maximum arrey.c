#include<stdio.h>
main()
{
    int n,i;
    printf("enter your value  of n:");
    scanf("%d",&n);
    int a[n],max=1;
    for(i=0;i<n;i++)
    {
        printf("enter your value a[%d] :",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}
