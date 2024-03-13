#include<stdio.h>

int Addition(int a,int b)
{
    int ans;
    ans=a+b;
    return ans;
}

int minus(int a,int b)
{
    int ans;
    ans=a-b;
    return ans;
}

int multiply(int a,int b)
{
    int ans;
    ans=a*b;
    return ans;
}

int divide(int a,int b)
{
    int ans;
    ans=a/b;
    return ans;
}

int modiual(int a,int b)
{
    int ans;
    ans=a%b;
    return ans;
}

main()
{
    int i;
    for(i=1;i<=1;i++)
    {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %\n");
        printf("Press 0 for exit\n\n");
        
        int a,b;
        printf("enter your value of a : ");
        scanf("%d",&a);
        printf("enter your value of b : ");
        scanf("%d",&b);
        
        char n;
        printf("enter 1 2 3 4 5 0 : ");
        scanf(" %c",&n);
        
        switch(n)
        {
            case '1' :{
                        int x=Addition(a,b);
                        printf("your ans  %d\n\n",x);
                        i--;
                      }
            break;
            
            case '2' :{
                        int x=minus(a,b);
                        printf("your ans %d\n\n",x);
                        i--;
                      }
            break;
            
            case '3' :{
                        int x=multiply(a,b);
                        printf("your ans %d\n\n",x);
                        i--;
                      }
            break;
            
            case '4' :{
                        int x=divide(a,b);
                        printf("your ans %d\n\n",x);
                        i--;
                      }
            break;
            
            case '5' :{
                        int x=modiual(a,b);
                        printf("your ans %d\n\n",x);
                        i--;
                      }
            break;
            
            case '0' :{
                        printf("thanks so much !");
                        i++;
                      }
                      break;
            default : printf("1 2 3 4 5 0 !\n\n");
        }
    }
}