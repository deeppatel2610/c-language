#include<stdio.h>
main()
{
    int x,n;
    printf("enter your value n :");
    scanf("%d",&n);
    for (x=1;x<=n;x++)
    {
        if (x==5)
        {
            continue;
        }
        printf("%d ",x);
    }
    
}