#include <stdio.h> 
typedef struct date 
{
    int d[100];
    char m[100];
    int y[100];
}meow;
typedef struct emp_det
{
    char name[50];
    char dept[50];
    int sal;
    meow doj;
}emp_det;

int main()
{
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    emp_det e[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter the details of the %d emplpoyee: \n",i+1);
        printf("Enter your name: ");
        scanf("%s",&e[i].name);
        printf("\nEnter your department: ");
        scanf("%s",&e[i].dept);
        printf("\nEnter your salary: ");
        scanf("%d",&e[i].sal);
        printf("\nEnter your Date of joining as dd/month/yyyy: \n");
        scanf("%s%s%s",&e[i].doj.d,e[i].doj.m,&e[i].doj.y); 

        
    }
    for(i = 0;i<n;i++)
    {   
        printf("Name \t Department \t salary \t Date of Joining");
        printf("\n");
        printf("%s",e[i].name); 
        printf(" \t ");
        printf("%s",e[i].dept);
        printf(" \t \t");
        printf("%d",e[i].sal);
        printf(" \t \t");
        printf("%s%s%s",e[i].doj.d,e[i].doj.m,e[i].doj.y);
        printf("\n");
    } 
    
    return 0;
    
}    