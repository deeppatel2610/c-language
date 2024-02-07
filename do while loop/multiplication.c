#include<stdio.h>
main()
{
    int x=1,n;
    printf("enter your value n :");
    scanf("%d",&n);
    do
    {
         printf("%d x %d = %d\n",n,x,x*n);
        x++;
    }while(x<=10);
   
}