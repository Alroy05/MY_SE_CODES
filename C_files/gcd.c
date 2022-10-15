#include<stdio.h>
int main()
{
  int a,b,rem;
  printf("Enter 2 numbers \n");
  scanf("%d%d",&a,&b);
  do
  {
   rem=a%b;
   a=b;
   b=rem;
   }while(a%b!=0);
  printf("The GCD is %d \n",b);
 return 0;
  }
