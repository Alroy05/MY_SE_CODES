#include<stdio.h>

int main()
{
    float x,fact=1, result=1,sign=1,num=1;
  
    int i;
    
    printf("Enter angle in degrees\n");
    scanf("%f",&x);
    x=x*3.14/180;
    for(i=1;i<=5;i++)
    {
        sign=sign*(-1);
        num=num*x*x;
        fact=fact*(2*i-1)*(2*i);
        result=result+(sign*num/fact);
    }
        printf("Cos of the angle is %f",result);
    return 0;


}