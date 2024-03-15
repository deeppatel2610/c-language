#include<stdio.h>

void cube(int *b,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",(*b) * (*b) * (*b));
            *b++;
        }
    }
}

main()
{
    int n,i,j;
    printf("entre your value of n : ");
    scanf("%d",&n);
    int a[n][n];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter your value of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    int *b = &a[0][0];
    
    cube(b,n);
}
