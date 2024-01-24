#include<stdio.h>
main()
{
    int a,b,c,d,e;
    printf("enter your value a b c d e :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    if(a>b && a>c && a>d && a>e)
    {
        printf("a is maximum");
    }
    else if(b>a && b>c && b>d && b>e)
    {
        printf("b is maximum");
    }
    else if(c>a && c>b && c>d && c>e)
    {
        printf("c is maximum");
    }
    else if(d>a && d>b && d>c && d>e)
    {
        printf("d is maximum");
    }
    else
    {
        printf("e is maximum");
    }
}