/*To find an overtime for 10 employees*/
#include<stdio.h>

int main()
{
    float otpay;
    int hour,i=1;

    while(i<=10) //loop for 10 employees
    {
        printf("\nEnter the number of hours worked:");
        scanf("%d",&hour);

        if(hour>40)
        {
            otpay=(hour-40)*12;
            printf("No of hours worked=%d \n Overtime pay=Rs.%f\n",hour,otpay);
        }
        else
        {
            otpay=0;
            printf("No of hours worked is %d. This is less than 40 hrs. Hence no overtime",hour);
        }
        i++; //loop counter increments
        
    }
    return 0;
}

