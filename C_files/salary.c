#include<stdio.h>
int main()
{
    float basic,HRA,DA,gross;
    printf("Enter basic salary");
    scanf("%f",&basic);
    HRA = 0.1*basic;
    DA = 0.3*basic;
    gross= basic + HRA + DA + 1600;
    printf("Gross salary is :%f",gross);
    return 0;
}

