
#include <stdio.h>  //lab 7 swapping values, call by refrence
void callbyref(int *, int *);  
int main()  
{  
    int a,b;
    printf("Enter the 2 numbers: ");
    scanf("%d %d",&a,&b); 
    callbyref(&a,&b);
    return 0; 
}  
void callbyref (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("The swapped values are:\n a = %d, b = %d\n",*a,*b);  
}