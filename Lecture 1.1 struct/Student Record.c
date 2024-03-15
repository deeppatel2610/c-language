#include<stdio.h>
#include<string.h>
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school
struct student
{
    int id;
    char name[100];
    int age;
    char conrse[100];
    char city[100];
    int standard;
    char school[100];
};
main()
{
    int n,i;
    printf("entre student total potal : ");
    scanf("%d",&n);
    
    struct student s[n];
    
    for(i=0;i<n;i++)
    {
        printf("stu_id : ");
        scanf("%d",&s[i].id);
        
        printf("stu_name : ");
        scanf("%s",&s[i].name);
        
        printf("stu_age : ");
        scanf("%d",&s[i].age);
        
        printf("stu_course : ");
        scanf("%s",&s[i].conrse);
        
        printf("stu_city : ");
        scanf("%s",&s[i].city);
        
        printf("stu_standard : ");
        scanf("%d",&s[i].standard);
        
        printf("stu_school : ");
        scanf("%s",&s[i].school);
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
        printf("stu_id : %d\n",s[i].id);
        printf("stu_name : %s\n",s[i].name);
        printf("stu_age : %d\n",s[i].age);
        printf("stu_course : %s\n",s[i].conrse);
        printf("stu_city : %s\n",s[i].city);
        printf("stu_standard : %d\n",s[i].standard);
        printf("stu_school : %s\n\n",s[i].school);
    }
}