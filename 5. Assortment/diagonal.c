#include<stdio.h>
main()
{
    int n,m,i,j,sum=0;
    printf("enter your value of n : ");
    scanf("%d",&n);
    printf("enter your value of m : ");
    scanf("%d",&m);
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
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    
    printf("%d",sum);
}