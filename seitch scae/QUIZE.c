#include<stdio.h>
main()
{
    char ans;
    int sum=0;
    printf("1) What is the pH value of the human body?\n");
    printf("A) 9.2 to 9.8\n");
    printf("B) 7.0 to 7.8\n");
    printf("C) 6.1 to 6.3\n");
    printf("D) 5.4 to 5.6\n");
    printf("enter your ans :");
    scanf(" %c",&ans);
    
    switch(ans)
    {
        case 'A' : printf("wrong ans");break;
        case 'B' : printf("right ans");
        sum++;
        {
            printf("\n\n2) Which of the following are called Key Industrial animals  ?\n");
            printf("A) Producers\n");
            printf("B) Tertiary consumers\n");
            printf("C) Primary consumers\n");
            printf("D) None of these\n");
            printf("enter your ans :");
            scanf(" %c",&ans);
            switch(ans)
            {
                case 'A' : printf("wrong ans");break;
                case 'B' : printf("wrong ans");break;
                case 'C' : printf("right ans");
                sum++;
                {
                    printf("\n\n3) Which of the given amendments made it compulsory for the president to consent to the constitutional Amendment bills?\n");
                    printf("A) 27th\n");
                    printf("B) 29th\n");
                    printf("C) 24th\n");
                    printf("D) 22th\n");
                    printf("enter your ans :");
                    scanf(" %c",&ans);
                    
                    switch(ans)
                    {
                        case 'A' : printf("wrong ans");break;
                        case 'B' : printf("wrong ans");break;
                        case 'C' : printf("right ans");
                        sum++;
                        {
                            printf("\n\n4) Elections to panchayats in state are regulated by ?\n");
                            printf("A) Gram panchayat\n");
                            printf("B) Nagar Nigam\n");
                            printf("C) Election Commission of India\n");
                            printf("D) State Election Commission\n");
                            printf("enter your ans :");
                            scanf(" %c",&ans);
                            
                            switch(ans)
                            {
                                case 'A' : printf("wrong ans");break;
                                case 'B' : printf("wrong ans");break;
                                case 'C' : printf("wrong ans");break;
                                case 'D' : printf("right ans");
                                sum++;
                                {
                                    printf("\n\n5) Which of the following Himalayan regions is called Shivalik's ?\n");
                                    printf("A) Upper Himalayas\n");
                                    printf("B) Lower Himalayas\n");
                                    printf("C) Outer Himalayas\n");
                                    printf("D) Inner Himalayas\n");
                                    printf("enter your ans :");
                                    scanf(" %c",&ans);
                                    
                                    switch(ans)
                                    {
                                        case 'A' : printf("wrong ans");break;
                                        case 'B' : printf("wrong ans");break;
                                        case 'C' : printf("right ans");
                                        sum++;
                                        break;
                                        case 'D' : printf("wrong ans");break;
                                        default : printf("A to D only");
                                    }
                                }
                                break;
                                default : printf("A to D only");
                            }
                        }
                        case 'D' : printf("wrong ans");break;
                        default : printf("A to D only");
                    }
                }
                break;
                case 'D' : printf("wrong ans");break;
                default : printf("A to D only");
            }
        }
        break;
        case 'C' : printf("wrong ans");break;
        case 'D' : printf("wrong ans");break;
        default : printf("A to D only");
        
        
    }
    printf("\n\nyour score %d/5",sum);
}