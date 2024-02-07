#include<stdio.h>
main()
{
    int x,n;
    printf("enter your value :");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        if(x%2==1)
        {
            printf("%d ",x);
        }
    }
}