#include<stdio.h>
main()
{
    int i,j,n,m;
    printf("Enter your valur n :");
    scanf("%d",&n);
    printf("Enter your valur m :");
    scanf("%d",&m);
    int a[n][m];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter your value a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
}