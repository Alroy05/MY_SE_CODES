#include<stdio.h> 
#include<math.h>
//code to find roots of the quadratic equation
int main()
{
int a,b,c;
float x1,x2,des;
printf("Enter the co-efficent of the quadratic eq. \n ");
scanf("%d%d%d",&a,&b,&c);
des = b*b - 4*a*c;
if(des>=0) //if roots are real
{
x1 = (-b+sqrt(des))/(2*a);//if block
x2 = (-b-sqrt(des))/(2*a);
printf("Roots of the equation are %f%f",x1,x2);
}
else 
printf("The roots are imaginary");
return 0;
}
