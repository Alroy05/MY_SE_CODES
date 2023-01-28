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
            arr[j+1]=arr[j]
            j--;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}

