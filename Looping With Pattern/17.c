#include<stdio.h>
main()
{
    int x,y;
    for(x=1;x<=5;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("%d ",y%2==1);
        }
        printf("\n");
    }
}