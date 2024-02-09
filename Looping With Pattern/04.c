#include<stdio.h>
main()
{
    int x,y;
    for(x=5;x>=1;x--)
    {
        for(y=5;y>=x;y--)
        {
            printf("%d",y);
        }
        printf("\n");
    }
}