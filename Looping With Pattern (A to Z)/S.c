#include<stdio.h>
main()
{
    int x,y;
    for(x=1; x<=7; x++)
    {
        for(y=1; y<=5; y++)
        {
            if((x==1 && y==2) || (x==1 && y==3) || (x==1 && y==4) || (x==1 && y==5) || (x==2 && y==1) || (x==3 && y==1))
            {
                printf("* ");
            }
            else if((x==4 && y==2) || (x==4 && y==3) || (x==4 && y==4))
            {
                printf("* ");
            }
            else if((x==5 && y==5) || (x==6 && y==5) || (x==7 && y==4) || (x==7 && y==3) || (x==7 && y==2) || (x==7 && y==1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}