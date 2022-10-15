#include<stdio.h>

int main()
{
int n,i;
    
    printf("Enter the number of employees");
    scanf("%d",&n);
struct address
{
    char city[100];
    int pin;
};

struct employee
{
    int id;
    char name[100];
    int salary;
    char doj[100];
    struct address a[n];
};
 
struct employee e[n];
    

    for(i=0;i<n;i++)
    {
        printf("Enter the details of employee %d \n",i+1);
        printf("Enter the details in the format (Id_Name_salary_doj_city_pin)");
        scanf("%d%s%d%s%s%d",&e[i].id,e[i].name,&e[i].salary,e[i].doj,&e[i].a[i].city,&e[i].a[i].pin);
    }
        printf("\nId\tName\tsalary\tDOJ\tcity\tpin\t \n");
     for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%s\t%s\t%d \n",e[i].id,e[i].name,e[i].salary,e[i].doj,e[i].a[i].city,e[i].a[i].pin);
    }
    return 0;
}