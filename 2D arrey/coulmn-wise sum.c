#include<stdio.h>
main()
{
    int n,m,i,j,sum=0;
    printf("enter your value of n :");
    scanf("%d",&n);
    printf("enter your value of m :");
    scanf("%d",&m);
    int k=m;
    int a[n][m];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("enter your value a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    int x;
    for(x=0;x<k;x++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(j==x)
                {
                    sum=sum+a[i][j];
                }
            }
        }
        printf("%d ",sum);
        sum=0;
    }
}