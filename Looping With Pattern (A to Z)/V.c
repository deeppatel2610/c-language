#include<stdio.h>
main()
{
    int x,y;
    for(x=1; x<=7; x++)
    {
        for(y=1; y<=5; y++)
        {
            if((x==6 && y==1) || (x==7 && y==1) || (x==6 && y==5) || (x==7 && y==5))
            {
                printf(" ");
            }
            else if(y==1 || y==5)
            {
                printf("* ");
            }
            else if((x==6 && y==2) || (x==6 && y==4) || (x==7 && y==3))
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