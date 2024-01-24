#include<stdio.h>
main()
{
    int x,y,z;
    printf("enter your value z x y :");
    scanf("%d%d%d",&x,&y,&z);
    
    if(x>y)
    {
        if(x>z)
        {
            printf("x is maximum");
        }
        else
        {
            printf("z is maximum");
        }
    }
    else
    {
        if(y>z)
        {
            printf("y is maximum");
        }
        else
        {
            printf("z is maximum");
        }
    }
}