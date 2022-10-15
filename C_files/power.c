/* To find power of a number without built-in function*/
#include<stdio.h>

int main()
{
    int x,y,i=1;
    long int power=1;

    printf("\nEnter two numbers");
    scanf("%d%d",&x,&y);

    while(i<=y)
    {
        power=power*x;
        i++;
    }
    printf("%d to the power %d is %ld\n",x,y,power);

    return 0;
}