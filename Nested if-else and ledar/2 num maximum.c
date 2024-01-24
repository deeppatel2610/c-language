#include<stdio.h>
main()
{
    int x,y;
    printf("enter your value x y :");
    scanf("%d%d",&x,&y);
    
    if(x<y)
    {
        printf("y is maximum");
    }
    else if(x>y)
    {
        printf("x is maximum");
    }
}