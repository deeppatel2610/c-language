#include<stdio.h>
main()
{
    int x,y;
    for(x=5;x>=1;x--)
    {
        for(y=x;y<=5;y++)
        {
            printf("%d",y);
        }
        printf("\n");
    }
}