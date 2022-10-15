#include<stdio.h>
int main()
{
   int a,b,choice;
   printf("Enter two numbers");
   scanf("%d%d",&a,&b);
   printf("Enter choice of operation : \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n");
   scanf("%d",&choice);
   switch(choice)
      {  
         case 1:
         printf("Result of addition is : %d",a+b);
         break;
         case 2:
         printf("Result of substraction is : %d",a-b);
         break;
         case 3:
         printf("Result of multiplication is : %d",a*b);
         break;
         case 4:
         printf("Result of divison is : %d", a/b);
         break;
         default :
         printf("You have entered an invalid choice");
         
         }
         return 0;
           
}

 