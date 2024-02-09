#include<stdio.h>
main()
{
    int x,y;
    char z=65;
    for(x=1;x<=5;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("%c ",z);
            z++;
        }
        printf("\n");
    }
}