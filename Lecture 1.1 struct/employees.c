#include<stdio.h>
#include<string.h>
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name
struct employees
{
    int id;
    char name[100];
    int age;
    char role[100];
    char city[100];
    int experience;
    char company_name[100];
};
main()
{
    int n,i;
    printf("entre employees total potal : ");
    scanf("%d",&n);
    
    struct employees s[n];
    
    for(i=0;i<n;i++)
    {
        printf("emp_id : ");
        scanf("%d",&s[i].id);
        
        printf("emp_name : ");
        scanf("%s",&s[i].name);
        
        printf("emp_age : ");
        scanf("%d",&s[i].age);
        
        printf("emp_role : ");
        scanf("%s",&s[i].role);
        
        printf("emp_city : ");
        scanf("%s",&s[i].city);
        
        printf("emp_experience : ");
        scanf("%d",&s[i].experience);
        
        printf("company_name : ");
        scanf("%s",&s[i].company_name);
        printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
        printf("stu_id : %d\n",s[i].id);
        printf("stu_name : %s\n",s[i].name);
        printf("stu_age : %d\n",s[i].age);
        printf("stu_course : %s\n",s[i].role);
        printf("stu_city : %s\n",s[i].city);
        printf("stu_standard : %d\n",s[i].experience);
        printf("stu_school : %s\n\n",s[i].company_name);
    }
}
