#include<stdio.h>
main()
{
    int x,y;
    for(x=1;x<=4;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("%d",y);
        }
        printf("\n");
    }
    for(x=5;x>=1;x--)
    {
        for(y=1;y<=x;y++)
        {
            printf("%d",y);
        }
        printf("\n");
    }
     
}