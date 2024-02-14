 #include<stdio.h>
 main()
 {
     int x,y;
     
     for(x=1; x<=7; x++)
     {
         for(y=1; y<=5; y++)
         {
             if(y==1 || (x==1 && y==5) || (x==2 && y==4) || (x==3 && y==3) || (x==4 && y==2))
             {
                 printf("* ");
             }
             else if((x==5 && y==3) || (x==6 && y==4) || (x==7 && y==5))
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