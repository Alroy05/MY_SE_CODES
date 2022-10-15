#include<stdio.h>
int main()
{
float marks;
printf("Enter percentage\n");
scanf("%f",&marks);
if(marks>=60)
printf("first class");
else
if(marks>=50)
printf("second class");
else
if(marks>=40)
printf("Pass class");
else 
printf("Fail class");
return 0;
}
