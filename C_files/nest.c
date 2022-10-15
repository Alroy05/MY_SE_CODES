#include<stdio.h>
typedef struct dateofjoining
	{
		int dd,mm,yy;
	}doj;
struct Employee
{   
	char name[20];
	int id;
	float salary;
	doj d;
};
int main()
{
	int i,n;
	float x;
	struct Employee e[100];
	printf("Enter the number of employees:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the name, id, salary and date of joining(ddmmyy):");
		scanf("%s %d %f %d %d %d",&e[i].name,&e[i].id,&e[i].salary,&e[i].d.dd,
		&e[i].d.mm,&e[i].d.yy);
	}
	printf("Name\n employee-id\n Salary\n Date of joining\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Name%s\n id%d\n Salary%f\n Date of joining%d-%d-%d\n",e[i].name,e[i].id,e[i].salary,
		e[i].d.dd,e[i].d.mm,e[i].d.yy);
	}
	return 0;
	
}