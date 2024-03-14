#include<stdio.h>
main()
{
    int a,b,c=0;
    printf("Enter your value of a : ");
    scanf("%d",&a);
    printf("Enter your value of b : ");
    scanf("%d",&b);
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    int *x = &a;
    int *y = &b;
    int *z = &c;
    
    *z = *y;
    *y = *x;
    *x = *z;
    
    printf("a = %d\n",*x);
    printf("b = %d\n",*y);
    
}