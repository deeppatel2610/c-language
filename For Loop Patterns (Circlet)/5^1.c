#include<stdio.h>
main()
{
    int x,y,z;
    for(x=5;x>=1;x--)
    {
        for(z=1;z<x;z++)
        {
            printf("  ");
        }
        for(y=5;y>=x;y--)
        {
            printf("%d ",y);
        }
        for(y=x+1;y<=5;y++)
        {
            printf("%d ",y);
        }
        printf("\n");
    }
}