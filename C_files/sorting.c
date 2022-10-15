#include<stdio.h>
#include<stdlib.h>

void main()
{
 int a[100],n,i,temp,j;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
 {
  printf("Enter a value:");
  scanf("%d",&a[i]);
 }
 for(i=0;i<=n-2;i++)
 {
  for(j=0;j<=n-2;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];#include<stdio.h>
#include<stdlib.h>

void main()
{
 int a[100],n,i,temp,j;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
 {
  printf("Enter a value:");
  scanf("%d",&a[i]);
 }
 for(i=0;i<=n-2;i++)
 {
  for(j=0;j<=n-2;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("After sorting:\n");
 for(i=0;i<=n-1;i++)
 {
  printf("%d\n",a[i]);
 }
}
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("After sorting:\n");
 for(i=0;i<=n-1;i++)
 {
  printf("%d\n",a[i]);
 }
}
