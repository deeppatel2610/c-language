#include<stdio.h>

int divisible(int n)
{
    int check = 0;
    if(n%3==0 || n%5==0)
    {
        check = 1;
    }
    return check;
}

main()
{
    int n;
    printf("Enetr your value : ");
    scanf("%d",&n);
    int x = divisible(n);
    
    if(x==1)
    {
        printf("The given number is divisible by both 3 & 5.");
    }
    else
    {
        printf("The given number is not divisible by both 3 & 5.");
    }
}