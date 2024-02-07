#include<stdio.h>
main()
{
    int i,j,sum=0,check=0;
    
    printf("1 2 ");
    
    for(j=3;j<=50;j++)
    {
        check=0;
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            printf("%d ",j);
            sum=sum+j;
        }
    }
    printf("\n sum is %d",sum);
}