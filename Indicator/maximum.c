#include<stdio.h>
main()
{
   int x,y;
   printf("Enter value of x,y :");
   scanf("%d%d",&x,&y);
   
   int *z=&x;
   int *a=&y;
   if(*z>*a)
   {
   	printf("max is x %d",*z);
   }
   else
   {
   	printf("max is y %d",*a);
   }
}