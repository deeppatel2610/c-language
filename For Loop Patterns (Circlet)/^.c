#include<stdio.h>
main()
{
    int x,y;
    for(x=1;x<=4;x++)
    {
        for(y=1;y<=7;y++)
        {
            if((x==1 && y==4) || (x==2 && y==3) || (x==2 && y==5) || (x==3 && y==6) || (x==3 && y==2) || (x==4 && y==7) || (x==4 && y==1))
            {
                printf("*");   
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}