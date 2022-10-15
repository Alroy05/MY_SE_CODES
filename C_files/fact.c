/* find factorial using loop*/
#include <stdio.h>

int main()
{
    int num,i=1;
    unsigned long int fact=1;

    printf("Enter the number less than 34");
    scanf("%d",&num);

    while(i<=num)
    {
        fact=fact*i; //calculate factorial terms
        i++;
    }
    printf("Factorial of a number %d=%lu\n",num,fact);
    return 0;
}
