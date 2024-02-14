 #include<stdio.h>
 main()
 {
     int x,y;
     
     for(x=1; x<=7; x++)
     {
         for(y=1; y<=5; y++)
         {
             if(x==1 || x==4 || y==1)
             {
                 printf("* ");
             }
             else if((x==2 && y==5) || (x==3 && y==5))
             {
                 printf(" *");
             }
             else
             {
                 printf("  ");
             }
         }
         printf("\n");
     }
 }