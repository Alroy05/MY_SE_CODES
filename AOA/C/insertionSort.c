#include<stdio.h>

int main()
{
    int n,arr[100],key,temp;
    printf("Enter the number of digits to be entered");
    scanf("%d",&n);
    
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    
    }
     
    for(int i=1;i<n;i++)
    {
        int j = i-1;
        key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("Sorted elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
/**********************************************
Output:-
Enter the number of digits to be entered6
Enter the elements of the array2 9 3 8 4 7  
Sorted elements are: 2 3 4 7 8 9 
***********************************************/
