#include<stdio.h>
main()
{
    int Physics,Chemistry,Biology,Mathematics,Computer,sum=0;
    
    printf("enter your marsk(100) Physics Chemistry Biology Mathematics Computer :");
    scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&Computer);
    
    sum=Physics+Chemistry+Biology+Mathematics+Computer;
    printf("your total marsk %d\n",sum);
    sum=sum/5;
    printf("your PR %d\n",sum);
    
    if(sum>=90)
    {
        printf("Grade A");
    }
    else if(sum<90 && sum>=80)
    {
        printf("Grade B");
    }
    else if(sum<80 && sum>=70)
    {
        printf("Grade C");
    }
    else if(sum<70 && sum>=60)
    {
        printf("Grade D");
    }
    else if(sum<60 && sum>=50)
    {
        printf("Grade E");
    }
    else if(sum<50 && sum>=33)
    {
        printf("Grade F");
    }
    else
    {
        printf("Failed");
    }
}