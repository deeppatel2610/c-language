#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("enter your value a b c d :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a maximum");
            }
            else
            {
                printf("d maximum");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c maximum");
            }
            else
            {
                printf("d maximum");
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("b maximum");
            }
            else
            {
                printf("d maximum");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c maximum");
            }
            else
            {
                printf("d maximum");
            }
        }
    }
}