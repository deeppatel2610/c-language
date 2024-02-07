#include<stdio.h>
main()
{
    int x,n;
    printf("enter your value :");
    scanf("%d",&n);
    for(x=n;x>=1;x--)
    {
        if(x%2==0)
        {
            printf("%d ",x);
        }
    }
}