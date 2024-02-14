#include<stdio.h>
main()
{
    int x,y;
    for(x=1; x<=7; x++)
    {
        for(y=1; y<=5; y++)
        {
            if((x==7 && y==1) || (x==7 && y==5))
            {
                printf(" ");
            }
            else if( y==1 || y==5)
            {
                printf("* ");
            }
            else if(x==7)
            {
                printf(" *");
            }
             else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}