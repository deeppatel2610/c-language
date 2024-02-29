#include<stdio.h>
main()
{
    int n,m,i,j,max=1;
    printf("entyer your value of n : ");
    scanf("%d",&n);
    printf("entyer your value of m : ");
    scanf("%d",&m);
    int a[n][m];
    
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
            if(max<a[i][j])
            {
                max=a[i][j];
            }
        }
    }
    
    printf("%d",max);
}