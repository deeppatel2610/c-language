 #include<stdio.h>
 main()
 {
     int x,y;
     
     for(x=1; x<=7; x++)
     {
         for(y=1; y<=5; y++)
         {
             if(y==1 || y==5 || (x==2 && y==2) || (x==2 && y==4) || (x==3 && y==3))
             {
                 printf("* ");
             }
             else
             {
                 printf("  ");
             }
         }
         printf("\n");
     }
 }