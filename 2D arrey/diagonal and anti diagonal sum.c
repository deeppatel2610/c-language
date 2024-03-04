#include<stdio.h> 
main()
{
    int n,m,i,j,sum=0;
    printf("enter your value of n : ");
    scanf("%d",&n);
    printf("enter your value of m : ");
    scanf("%d",&m);
    int a[n][m];
    int x=m-1;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("enter your value of a[%d][%d] : ",i,j);
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
    printf("%d\n",sum);
    sum=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][x];
                x--;
            }
        }
    }
    printf("%d",sum);
}