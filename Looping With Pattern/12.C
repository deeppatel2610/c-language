#include<stdio.h>
main()
{
    int x,y;
    for(x=5;x>=1;x--)
    {
        for(y=x;y>=1;y--)
        {
            printf("%d",x);
        }
        printf("\n");
    }
}