 #include<stdio.h>
 main()
 {
     int x,y;
     
     for(x=1; x<=7; x++)
     {
         for(y=1; y<=5; y++)
         {
             if(y==1)
             {
                 printf("* ");
             }
             else if(  (y==2 && x==1) || (y==2 && x==7))
             {
                 printf(" *");
             }
             else if((y==5 && x==4))
             {
                 printf(" *");
             }
             else if((y==4 && x==5) || (y==4 && x==3))
             {
                 printf("  *");
             }
             else if((y==3 && x==6) || (y==3 && x==2))
             {
                 printf("  *");
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");
     }
 }