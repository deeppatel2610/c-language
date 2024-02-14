 #include<stdio.h>
 main()
 {
     int x,y;
     
     for(x=1; x<=7; x++)
     {
         for(y=1; y<=5; y++)
         {
             if(x==1 || x==4 || x==7 || y==1)
             {
                 printf("* ");
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }
 }