#include<stdio.h>
main()
{
    int x,y;
    for(x=1; x<=7; x++)
    {
        for(y=1; y<=7; y++)
        {
            if(x==1 || x==7 )
            {
                printf("* ");
            }
            else if((x==2 && y==6) || (x==3 && y==5) || (x==4 && y==4) || (x==5 && y==3) || (x==6 && y==2))
            {
                printf("*");
            }
             else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}