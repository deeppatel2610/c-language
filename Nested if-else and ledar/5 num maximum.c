#include<stdio.h>
main()
{
    int a,b,c,d,e;
    printf("enter your value a b c d e :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    printf("a maximum");
                }
                else
                {
                    printf("e maximum");
                }
            }
            else
            {
                if(d>e)
                {
                    printf("d maximum");
                }
                else
                {
                    printf("e maximum");
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    printf("c maximum");
                }
                else
                {
                    printf("e maximum ");
                }
            }
            else
            {
                if(d>e)
                {
                    printf("d maximum");
                }
                else
                {
                    printf("e maximum");
                }
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                if(b>e)
                {
                    printf("b maximum");
                }
                else
                {
                    printf("e maximum"); 
                }
            }
            else
            {
                if(d>e)
                {
                    printf("d maximum");
                }
                else
                {
                    printf("e maximum");
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    printf("c maximum");
                }
                else
                {
                    printf("e maximum ");
                }
            }
            else
            {
                if(d>e)
                {
                    printf("d maximum");
                }
                else
                {
                    printf("e maximum");
                }
            }
        }
    }
}