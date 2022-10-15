#include<stdio.h>
#include<stdlib.h>
void main()
{

 int x,n,y;
 int power(int,int);
 printf("Enter base and index:");
 scanf("%d%d",&x,&n);
 y=power(x,n);
 printf("y= %d",y);
}
int power(int x,int n)
{
 if(n==0) 
 return 1;
 return(x*power(x,n-1));
}

