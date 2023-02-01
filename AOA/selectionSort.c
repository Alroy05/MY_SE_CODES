#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    int a[n];
    int i,j;
    printf("Enter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
   
    printf("selection sort sort\n");
    int index,temp;
    for(i=0; i<n-1; i++)
    {
      index=i;
      for(j=i+1; j<n; j++)
      {
        if(a[j]<a[index])
        {
           index=j;
        }
      }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
        for(j=0; j<n; j++)
        {
        printf("%d ",a[j]);
       
        }
        printf("\n");
     }
   
    printf("Sorted elements\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

/**********************************
Enter the no of elements
5    
Enter the elements
2 9 3 7 4 
selection sort sort
2 9 3 7 4 
2 3 9 7 4 
2 3 4 7 9 
2 3 4 7 9 
Sorted elements
2 3 4 7 9 
************************************/