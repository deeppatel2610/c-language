#include<stdio.h>
main()
{
    char m;
    printf("enter day first letter : ");
    scanf(" %c",&m);
    
    switch(m)
    {
        case 'm' : printf("Monday");break;
        case 't' : printf("Tuesday");break;
        case 'w' : printf("Wednesday");break;
        case 'T' : printf("Thursday");break;
        case 'f' : printf("Friday");break;
        case 's' : printf("Saturday");break;
        case 'S' : printf("Sunday");break;
        default : printf("day first letter"); 
    }
}