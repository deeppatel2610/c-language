#include<stdio.h>

int plus(int a,int b)
{
    int ans=a+b;
    printf("%d",ans);
}

int minus(int a,int b)
{
    int ans=a-b;
    printf("%d",ans);
}

int multiple(int a,int b)
{
    int ans=a*b;
    printf("%d",ans);
}

int divide(int a,int b)
{
    int ans=a/b;
    printf("%d",ans);
}

void enter_value()
{
    int a,b;
    printf("entre your value of a : ");
    scanf("%d",&a);
    printf("entre your value of b : ");
    scanf("%d",&b);
    
    char n;
    printf("entre + - * / : ");
    scanf(" %c",&n);
    
    switch(n)
    {
        case '+' : plus(a,b);
        break;
        case '-' : minus(a,b);
        break;
        case '*' : multiple(a,b);
        break;
        case '/' : divide(a,b);
        break;
        default : printf("oil + - * / ");
    }
    printf("\n\n");
    enter_value();
}

main()
{
    enter_value();
}