#include<stdio.h>
main()
{
    int x,y;
    for(x=65;x<=69;x++)
    {
        for(y=65;y<=x;y++)
        {
            printf("%c ",y);
        }
        printf("\n");
    }
}