#include<stdio.h>
main()
{
    int a,b;
    
    printf("enter your value a :");
    scanf("%d",&a);
    
    for(b=1; b<=10; b++)
    {
        printf("%d x %d = %d\n",a,b,a*b);
    }
}