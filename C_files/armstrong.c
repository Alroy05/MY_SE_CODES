#include<stdio.h>
int main()
{
  int i=100,sum,rem,num;
  printf("Armstrong no. between 100-500 are:\n");
  while(i<=500)
  { 
    sum=0; 
    num=i;
    while(num!=0)
    {
      rem=num%10;
      num=num/10;
      sum=sum+(rem*rem*rem);
    }
      if(sum==i)
        printf("%d \n",i);
        i++;
  }
    return 0;
}
      
  
