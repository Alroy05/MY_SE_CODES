#include<stdio.h>
int main()
{
    int i,n;
struct date
{
  char dd[];
  char mm[];
  char yy[];
};

typedef struct employee
{
  char name[];
  char id[];
  char salary[];
  char dep[];
  struct date d;
}emp;

emp e1;
for(i=0;i<n;i++)
{
printf("Enter employee id");
scanf("%s",&e1.id);
printf("Enter the name of the employee");
scanf("%s",&e1.name);
printf("Enter department of the employee");
scanf("%s",&e1.dep);
printf("Enter salary of the employee");
scanf("%s",&e1.salary);
printf("Enter the date joining");
scanf("%s%s%s",&e1.d.dd,&e1.d.mm,&e1.d.yy);
}
for(i=0;i<n;i++)
{
printf("Employee id :%s \n",e1.id);
printf("Name of the employee :%s \n",e1.name);
printf("Salary :%s \n",e1.salary);
printf("Department :%s \n",e1.dep);
printf("Date of joining :%s %s %s \n",e1.d.dd,e1.d.mm,e1.d.yy);
}
return 0;
} 



